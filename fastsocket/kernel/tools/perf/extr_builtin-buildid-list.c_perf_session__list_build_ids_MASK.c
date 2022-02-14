
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_session {scalar_t__ fd_pipe; int filename; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct perf_session*) ;
 int FUNC_2 (struct perf_session*,int ,int) ;
 struct perf_session* FUNC_3 (int ,int ,int,int,int *) ;
 int FUNC_4 (struct perf_session*,int *) ;
 int VAR_3 ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(bool VAR_4, bool VAR_5)
{
 struct perf_session *VAR_6;

 FUNC_5();

 VAR_6 = FUNC_3(VAR_2, VAR_0, VAR_4, 0,
        &VAR_1);
 if (VAR_6 == ((void*)0))
  return -1;




 if (FUNC_0(VAR_6->filename, VAR_3))
  goto out;





 if (VAR_5 || VAR_6->fd_pipe)
  FUNC_4(VAR_6, &VAR_1);

 FUNC_2(VAR_6, VAR_3, VAR_5);
out:
 FUNC_1(VAR_6);
 return 0;
}
