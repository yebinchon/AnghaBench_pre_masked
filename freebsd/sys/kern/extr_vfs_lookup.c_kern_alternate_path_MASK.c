
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct nameidata {scalar_t__ ni_vp; } ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct nameidata*,int ) ;
 int VAR_8 ;
 int FUNC_1 (struct nameidata*,int ,int ,int,char const*,struct thread*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (char*,char*,size_t) ;
 int FUNC_3 (char const*,char*,size_t,size_t*) ;
 int FUNC_4 (char const*,char*,size_t,size_t*) ;
 int FUNC_5 (char*,int ) ;
 scalar_t__ FUNC_6 (size_t,int ,int ) ;
 int FUNC_7 (struct nameidata*) ;
 size_t FUNC_8 (char*,char const*,size_t) ;
 int FUNC_9 (scalar_t__) ;

int
FUNC_10(struct thread *VAR_11, const char *VAR_12, const char *VAR_13,
    enum uio_seg VAR_14, char **VAR_15, int VAR_16, int VAR_17)
{
 struct nameidata VAR_18, VAR_19;
 char *VAR_20, *VAR_21, *VAR_22;
 size_t VAR_23, VAR_24;
 int VAR_25;

 VAR_21 = (char *) FUNC_6(VAR_5, VAR_6, VAR_7);
 *VAR_15 = VAR_21;


 VAR_23 = FUNC_8(VAR_21, VAR_12, VAR_5);
 if (VAR_23 >= VAR_5) {
  *VAR_15 = ((void*)0);
  FUNC_5(VAR_21, VAR_6);
  return (VAR_1);
 }
 VAR_24 = VAR_5 - VAR_23;
 VAR_20 = VAR_21 + VAR_23;


 if (VAR_14 == VAR_10)
  VAR_25 = FUNC_4(VAR_13, VAR_20, VAR_24, &VAR_23);
 else
  VAR_25 = FUNC_3(VAR_13, VAR_20, VAR_24, &VAR_23);

 if (VAR_25) {
  *VAR_15 = ((void*)0);
  FUNC_5(VAR_21, VAR_6);
  return (VAR_25);
 }


 if (*VAR_20 != '/') {
  VAR_25 = VAR_1;
  goto keeporig;
 }

 if (VAR_17 != VAR_0) {




  FUNC_2(VAR_20, VAR_21, VAR_23);
  return (0);
 }
 if (VAR_16) {
  for (VAR_22 = &VAR_20[VAR_23] - 1; *VAR_22 != '/'; VAR_22--);
  *VAR_22 = '\0';

  FUNC_1(&VAR_18, VAR_4, VAR_9, VAR_10, VAR_21, VAR_11);
  VAR_25 = FUNC_7(&VAR_18);
  *VAR_22 = '/';
  if (VAR_25 != 0)
   goto keeporig;
 } else {
  FUNC_1(&VAR_18, VAR_4, VAR_9, VAR_10, VAR_21, VAR_11);

  VAR_25 = FUNC_7(&VAR_18);
  if (VAR_25 != 0)
   goto keeporig;
  FUNC_1(&VAR_19, VAR_4, VAR_3, VAR_10, VAR_12,
      VAR_11);


  VAR_25 = FUNC_7(&VAR_19);
  if (VAR_25 == 0) {
   if (VAR_18.ni_vp == VAR_19.ni_vp)
    VAR_25 = VAR_2;

   FUNC_0(&VAR_19, VAR_8);
   FUNC_9(VAR_19.ni_vp);
  }
 }

 FUNC_0(&VAR_18, VAR_8);
 FUNC_9(VAR_18.ni_vp);

keeporig:

 if (VAR_25)
  FUNC_2(VAR_20, VAR_21, VAR_23);
 return (VAR_25);
}
