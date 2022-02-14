
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_file {int ** fi_fds; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct nfs4_file *VAR_0, int VAR_1)
{
 if (VAR_0->fi_fds[VAR_1]) {
  FUNC_0(VAR_0->fi_fds[VAR_1]);
  VAR_0->fi_fds[VAR_1] = ((void*)0);
 }
}
