
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct nameidata {int ni_vp; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct nameidata*,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct nameidata*,int ,int,int ,char const*,struct thread*) ;
 int VAR_3 ;
 int FUNC_3 (int ,int,void*,size_t,struct thread*) ;
 int FUNC_4 (struct nameidata*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct thread *VAR_4, const char *VAR_5, int VAR_6,
    void *VAR_7, size_t VAR_8, int VAR_9)
{
 struct nameidata VAR_10;
 int VAR_11;

 FUNC_0(VAR_6);
 FUNC_2(&VAR_10, VAR_1, VAR_9 | VAR_0, VAR_3, VAR_5, VAR_4);
 VAR_11 = FUNC_4(&VAR_10);
 if (VAR_11)
  return (VAR_11);
 FUNC_1(&VAR_10, VAR_2);

 VAR_11 = FUNC_3(VAR_10.ni_vp, VAR_6, VAR_7, VAR_8, VAR_4);

 FUNC_5(VAR_10.ni_vp);
 return (VAR_11);
}
