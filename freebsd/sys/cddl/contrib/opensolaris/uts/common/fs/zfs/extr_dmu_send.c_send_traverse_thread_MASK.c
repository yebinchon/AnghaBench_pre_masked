
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct send_thread_arg {int error_code; int q; int flags; int resume; int fromtxg; int * ds; } ;
struct send_block_record {int eos_marker; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct send_block_record*,int) ;
 struct send_block_record* FUNC_1 (int,int ) ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ,int *,int ,int ,struct send_thread_arg*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_4)
{
 struct send_thread_arg *VAR_5 = VAR_4;
 int VAR_6;
 struct send_block_record *VAR_7;

 if (VAR_5->ds != ((void*)0)) {
  VAR_6 = FUNC_3(VAR_5->ds,
      VAR_5->fromtxg, &VAR_5->resume,
      VAR_5->flags, VAR_3, VAR_5);

  if (VAR_6 != VAR_1)
   VAR_5->error_code = VAR_6;
 }
 VAR_7 = FUNC_1(sizeof (*VAR_7), VAR_2);
 VAR_7->eos_marker = VAR_0;
 FUNC_0(&VAR_5->q, VAR_7, 1);
 FUNC_2();
}
