
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct nameidata {int ni_vp; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct nameidata*,int ) ;
 int VAR_3 ;
 int FUNC_3 (struct nameidata*,int ,int,int ,char const*,struct thread*) ;
 int VAR_4 ;
 int FUNC_4 (char const*,char*,int,int *) ;
 int FUNC_5 (int ,int,char*,void*,size_t,struct thread*) ;
 int FUNC_6 (struct nameidata*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(struct thread *VAR_5, const char *VAR_6, int VAR_7,
    const char *VAR_8, void *VAR_9, size_t VAR_10, int VAR_11)
{
 struct nameidata VAR_12;
 char VAR_13[VAR_1];
 int VAR_14;

 FUNC_1(VAR_7);
 VAR_14 = FUNC_4(VAR_8, VAR_13, VAR_1, ((void*)0));
 if (VAR_14)
  return (VAR_14);
 FUNC_0(VAR_13);

 FUNC_3(&VAR_12, VAR_2, VAR_11 | VAR_0, VAR_4, VAR_6, VAR_5);
 VAR_14 = FUNC_6(&VAR_12);
 if (VAR_14)
  return (VAR_14);
 FUNC_2(&VAR_12, VAR_3);

 VAR_14 = FUNC_5(VAR_12.ni_vp, VAR_7, VAR_13, VAR_9,
     VAR_10, VAR_5);

 FUNC_7(VAR_12.ni_vp);
 return (VAR_14);
}
