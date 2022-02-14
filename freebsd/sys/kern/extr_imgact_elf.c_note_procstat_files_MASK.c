
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int structsize ;
struct sbuf {scalar_t__ s_error; } ;
struct proc {int dummy; } ;
struct kinfo_file {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct proc*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct proc*,struct sbuf*,size_t,int) ;
 int FUNC_3 (struct sbuf*,int*,int) ;
 int VAR_3 ;
 int FUNC_4 (struct sbuf*) ;
 size_t FUNC_5 (struct sbuf*,size_t,int ,int ) ;
 int FUNC_6 (struct sbuf*) ;
 struct sbuf* FUNC_7 (int *,int *,int,int ) ;
 int FUNC_8 (struct sbuf*,int ) ;
 int FUNC_9 (struct sbuf*,int ,size_t*) ;
 int FUNC_10 (struct sbuf*,size_t*) ;

__attribute__((used)) static void
FUNC_11(void *VAR_4, struct sbuf *VAR_5, size_t *VAR_6)
{
 struct proc *VAR_7;
 size_t VAR_8, VAR_9, VAR_10;
 ssize_t VAR_11, VAR_12;
 int VAR_13, VAR_14;

 if (VAR_2)
  VAR_14 = VAR_0;
 else
  VAR_14 = 0;

 VAR_7 = (struct proc *)VAR_4;
 VAR_13 = sizeof(struct kinfo_file);
 if (VAR_5 == ((void*)0)) {
  VAR_8 = 0;
  VAR_5 = FUNC_7(((void*)0), ((void*)0), 128, VAR_1);
  FUNC_9(VAR_5, VAR_3, &VAR_8);
  FUNC_3(VAR_5, &VAR_13, sizeof(VAR_13));
  FUNC_1(VAR_7);
  FUNC_2(VAR_7, VAR_5, -1, VAR_14);
  FUNC_6(VAR_5);
  FUNC_4(VAR_5);
  *VAR_6 = VAR_8;
 } else {
  FUNC_10(VAR_5, &VAR_11);

  FUNC_3(VAR_5, &VAR_13, sizeof(VAR_13));
  FUNC_1(VAR_7);
  FUNC_2(VAR_7, VAR_5, *VAR_6 - sizeof(VAR_13),
      VAR_14);

  VAR_12 = FUNC_5(VAR_5, VAR_11, 0, 0);
  if (VAR_12 < 0)
   return;
  VAR_9 = VAR_12;

  FUNC_0(VAR_9 <= *VAR_6,
      ("kern_proc_filedesc_out did not respect maxlen; "
       "requested %zu, got %zu", *VAR_6 - sizeof(VAR_13),
       VAR_9 - sizeof(VAR_13)));

  for (VAR_10 = 0; VAR_10 < *VAR_6 - VAR_9 && VAR_5->s_error == 0; VAR_10++)
   FUNC_8(VAR_5, 0);
 }
}
