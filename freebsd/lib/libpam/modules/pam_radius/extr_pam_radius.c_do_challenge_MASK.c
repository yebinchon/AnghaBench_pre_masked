
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rad_handle {int dummy; } ;
struct pam_response {struct pam_response* resp; } ;
struct pam_message {struct pam_response* msg; void* msg_style; } ;
struct pam_conv {int (* conv ) (int,struct pam_message const**,struct pam_response**,int ) ;int appdata_ptr; } ;
typedef int pam_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;


 int FUNC_0 (struct rad_handle*,char const*,struct pam_response*,char const*,char const*,char const*,void const*,size_t) ;
 int FUNC_1 (struct pam_response*) ;
 int FUNC_2 (struct pam_response*,int ,int ) ;
 int FUNC_3 (int *,int ,void const**) ;
 struct pam_response* FUNC_4 (void const*,size_t) ;
 int FUNC_5 (struct rad_handle*,void const**,size_t*) ;
 int FUNC_6 (struct rad_handle*) ;
 struct pam_response* FUNC_7 (char*) ;
 int FUNC_8 (struct pam_response*) ;
 int FUNC_9 (int,struct pam_message const**,struct pam_response**,int ) ;
 int FUNC_10 (int ,char*,...) ;

__attribute__((used)) static int
FUNC_11(pam_handle_t *VAR_7, struct rad_handle *VAR_8, const char *VAR_9,
    const char *VAR_10, const char *VAR_11, const char *VAR_12)
{
 int VAR_13;
 int VAR_14;
 const void *VAR_15;
 size_t VAR_16;
 const void *VAR_17;
 size_t VAR_18;
 struct pam_message VAR_19[VAR_1];
 const struct pam_message *VAR_20[VAR_1];
 struct pam_response *VAR_21;
 int VAR_22;
 const void *VAR_23;
 const struct pam_conv *VAR_24;

 VAR_17 = ((void*)0);
 VAR_18 = 0;
 VAR_22 = 0;
 while ((VAR_14 = FUNC_5(VAR_8, &VAR_15, &VAR_16)) > 0) {
  switch (VAR_14) {

  case 128:
   VAR_17 = VAR_15;
   VAR_18 = VAR_16;
   break;

  case 129:
   if (VAR_22 >= VAR_1) {
    FUNC_10(VAR_0,
        "Too many RADIUS challenge messages");
    return (VAR_4);
   }
   VAR_19[VAR_22].msg = FUNC_4(VAR_15, VAR_16);
   if (VAR_19[VAR_22].msg == ((void*)0)) {
    FUNC_10(VAR_0,
        "rad_cvt_string: out of memory");
    return (VAR_4);
   }
   VAR_19[VAR_22].msg_style = VAR_6;
   VAR_20[VAR_22] = &VAR_19[VAR_22];
   VAR_22++;
   break;
  }
 }
 if (VAR_14 == -1) {
  FUNC_10(VAR_0, "rad_get_attr: %s", FUNC_6(VAR_8));
  return (VAR_4);
 }
 if (VAR_22 == 0) {
  VAR_19[VAR_22].msg = FUNC_7("(null RADIUS challenge): ");
  if (VAR_19[VAR_22].msg == ((void*)0)) {
   FUNC_10(VAR_0, "Out of memory");
   return (VAR_4);
  }
  VAR_19[VAR_22].msg_style = VAR_6;
  VAR_20[VAR_22] = &VAR_19[VAR_22];
  VAR_22++;
 }
 VAR_19[VAR_22-1].msg_style = VAR_3;
 if ((VAR_13 = FUNC_3(VAR_7, VAR_2, &VAR_23)) != VAR_5) {
  FUNC_10(VAR_0, "do_challenge: cannot get PAM_CONV");
  return (VAR_13);
 }
 VAR_24 = (const struct pam_conv *)VAR_23;
 if ((VAR_13 = VAR_24->conv(VAR_22, VAR_20, &VAR_21,
     VAR_24->appdata_ptr)) != VAR_5)
  return (VAR_13);
 if (FUNC_0(VAR_8, VAR_9, VAR_21[VAR_22-1].resp, VAR_10,
     VAR_11, VAR_12, VAR_17, VAR_18) == -1)
  return (VAR_4);
 FUNC_2(VAR_21[VAR_22-1].resp, 0, FUNC_8(VAR_21[VAR_22-1].resp));
 FUNC_1(VAR_21[VAR_22-1].resp);
 FUNC_1(VAR_21);
 while (VAR_22 > 0)
  FUNC_1(VAR_19[--VAR_22].msg);
 return (VAR_5);
}
