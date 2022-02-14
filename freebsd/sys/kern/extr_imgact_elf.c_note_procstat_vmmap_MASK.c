
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int structsize ;
struct sbuf {int dummy; } ;
struct proc {int dummy; } ;
struct kinfo_vmentry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct proc*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct proc*,struct sbuf*,size_t,int) ;
 int FUNC_2 (struct sbuf*,int*,int) ;
 int VAR_3 ;
 int FUNC_3 (struct sbuf*) ;
 int FUNC_4 (struct sbuf*) ;
 struct sbuf* FUNC_5 (int *,int *,int,int ) ;
 int FUNC_6 (struct sbuf*,int ,size_t*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_4, struct sbuf *VAR_5, size_t *VAR_6)
{
 struct proc *VAR_7;
 size_t VAR_8;
 int VAR_9, VAR_10;

 if (VAR_2)
  VAR_10 = VAR_0;
 else
  VAR_10 = 0;

 VAR_7 = (struct proc *)VAR_4;
 VAR_9 = sizeof(struct kinfo_vmentry);
 if (VAR_5 == ((void*)0)) {
  VAR_8 = 0;
  VAR_5 = FUNC_5(((void*)0), ((void*)0), 128, VAR_1);
  FUNC_6(VAR_5, VAR_3, &VAR_8);
  FUNC_2(VAR_5, &VAR_9, sizeof(VAR_9));
  FUNC_0(VAR_7);
  FUNC_1(VAR_7, VAR_5, -1, VAR_10);
  FUNC_4(VAR_5);
  FUNC_3(VAR_5);
  *VAR_6 = VAR_8;
 } else {
  FUNC_2(VAR_5, &VAR_9, sizeof(VAR_9));
  FUNC_0(VAR_7);
  FUNC_1(VAR_7, VAR_5, *VAR_6 - sizeof(VAR_9),
      VAR_10);
 }
}
