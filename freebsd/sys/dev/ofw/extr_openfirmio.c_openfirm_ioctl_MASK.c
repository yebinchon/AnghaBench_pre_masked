
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int ;
struct thread {int dummy; } ;
struct ofiocdesc {scalar_t__ of_nodeid; int of_buflen; int of_name; int of_namelen; int of_buf; } ;
struct cdev {int dummy; } ;
typedef scalar_t__ phandle_t ;
typedef int newname ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;






 int VAR_10 ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__,char*,void*,int) ;
 int FUNC_3 (scalar_t__,char*) ;
 int FUNC_4 (scalar_t__,char*,char*,int) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,char*,char*,int) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (char*,int ,int) ;
 int FUNC_9 (char*,int ) ;
 scalar_t__ VAR_11 ;
 char* FUNC_10 (int,int ,int ) ;
 int FUNC_11 (scalar_t__,scalar_t__) ;
 int FUNC_12 (int ,int ,char**) ;
 int FUNC_13 (char*) ;

int
FUNC_14(struct cdev *VAR_12, u_long VAR_13, caddr_t VAR_14, int VAR_15,
    struct thread *VAR_16)
{
 struct ofiocdesc *VAR_17;
 phandle_t VAR_18;
 int VAR_19, VAR_20, VAR_21;
 char *VAR_22, *VAR_23;
 char VAR_24[32];

 if ((VAR_15 & VAR_6) == 0)
  return (VAR_0);

 VAR_17 = (struct ofiocdesc *)VAR_14;
 switch (VAR_13) {
 case 131:
  *(phandle_t *) VAR_14 = FUNC_1("/options");
  return (0);
 case 134:
 case 128:
 case 129:
 case 135:
 case 130:
  VAR_18 = VAR_17->of_nodeid;
  break;
 case 132:
 case 133:
  VAR_18 = *(phandle_t *)VAR_14;
  break;
 default:
  return (VAR_4);
 }

 if (VAR_18 != 0 && VAR_18 != VAR_11) {

  VAR_20 = FUNC_11(FUNC_5(0), VAR_18);
  if (!VAR_20)
   return (VAR_1);
  VAR_11 = VAR_18;
 }

 VAR_22 = VAR_23 = ((void*)0);
 VAR_21 = 0;
 switch (VAR_13) {

 case 134:
 case 130:
  if (VAR_18 == 0)
   return (VAR_1);
  VAR_21 = FUNC_12(VAR_17->of_namelen, VAR_17->of_name, &VAR_22);
  if (VAR_21)
   break;
  VAR_19 = FUNC_3(VAR_18, VAR_22);
  if (VAR_13 == 130) {
   VAR_17->of_buflen = VAR_19;
   break;
  }
  if (VAR_19 > VAR_17->of_buflen) {
   VAR_21 = VAR_5;
   break;
  }
  VAR_17->of_buflen = VAR_19;

  if (VAR_19 <= 0)
   break;
  VAR_23 = FUNC_10(VAR_19, VAR_8, VAR_9);
  VAR_19 = FUNC_2(VAR_18, VAR_22, (void *)VAR_23, VAR_19);
  VAR_21 = FUNC_8(VAR_23, VAR_17->of_buf, VAR_19);
  break;

 case 128:







  if ((VAR_15 & VAR_7) == 0)
   return (VAR_0);
  if (VAR_18 == 0)
   return (VAR_1);
  if ((u_int)VAR_17->of_buflen > VAR_10)
   return (VAR_2);
  VAR_21 = FUNC_12(VAR_17->of_namelen, VAR_17->of_name, &VAR_22);
  if (VAR_21)
   break;
  VAR_23 = FUNC_10(VAR_17->of_buflen, VAR_8, VAR_9);
  VAR_21 = FUNC_7(VAR_17->of_buf, VAR_23, VAR_17->of_buflen);
  if (VAR_21)
   break;
  VAR_19 = FUNC_6(VAR_18, VAR_22, VAR_23, VAR_17->of_buflen);
  if (VAR_19 < 0)
   VAR_21 = VAR_1;
  VAR_17->of_buflen = VAR_19;
  break;

 case 129:
  if (VAR_18 == 0 || VAR_17->of_buflen < 0)
   return (VAR_1);
  if (VAR_17->of_namelen != 0) {
   VAR_21 = FUNC_12(VAR_17->of_namelen, VAR_17->of_name,
       &VAR_22);
   if (VAR_21)
    break;
  }
  VAR_20 = FUNC_4(VAR_18, VAR_22, VAR_24, sizeof(VAR_24));
  if (VAR_20 == 0) {
   VAR_21 = VAR_3;
   break;
  }
  if (VAR_20 == -1) {
   VAR_21 = VAR_1;
   break;
  }
  VAR_19 = FUNC_13(VAR_24) + 1;
  if (VAR_19 > VAR_17->of_buflen)
   VAR_19 = VAR_17->of_buflen;
  else
   VAR_17->of_buflen = VAR_19;
  VAR_21 = FUNC_8(VAR_24, VAR_17->of_buf, VAR_19);
  break;

 case 132:
  VAR_18 = FUNC_5(VAR_18);
  *(phandle_t *)VAR_14 = VAR_11 = VAR_18;
  break;

 case 133:
  if (VAR_18 == 0)
   return (VAR_1);
  VAR_18 = FUNC_0(VAR_18);
  *(phandle_t *)VAR_14 = VAR_11 = VAR_18;
  break;

 case 135:
  VAR_21 = FUNC_12(VAR_17->of_namelen, VAR_17->of_name, &VAR_22);
  if (VAR_21)
   break;
  VAR_18 = FUNC_1(VAR_22);
  if (VAR_18 == -1) {
   VAR_21 = VAR_3;
   break;
  }
  VAR_17->of_nodeid = VAR_11 = VAR_18;
  break;
 }

 if (VAR_22 != ((void*)0))
  FUNC_9(VAR_22, VAR_8);
 if (VAR_23 != ((void*)0))
  FUNC_9(VAR_23, VAR_8);

 return (VAR_21);
}
