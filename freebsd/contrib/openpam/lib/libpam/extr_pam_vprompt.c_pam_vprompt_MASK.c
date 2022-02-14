
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct pam_response {char* resp; } ;
struct pam_message {int msg_style; char* msg; } ;
struct pam_conv {int (* conv ) (int,struct pam_message const**,struct pam_response**,int ) ;int appdata_ptr; } ;
typedef int pam_handle_t ;


 int FUNC_0 () ;
 int FUNC_1 (struct pam_response*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int const*,int ,void const**) ;
 int FUNC_5 (int,struct pam_message const**,struct pam_response**,int ) ;
 int FUNC_6 (char*,int,char const*,int ) ;

int
FUNC_7(const pam_handle_t *VAR_5,
 int VAR_6,
 char **VAR_7,
 const char *VAR_8,
 va_list VAR_9)
{
 char VAR_10[VAR_2];
 struct pam_message VAR_11;
 const struct pam_message *VAR_12;
 struct pam_response *VAR_13;
 const struct pam_conv *VAR_14;
 const void *VAR_15;
 int VAR_16;

 FUNC_0();
 VAR_16 = FUNC_4(VAR_5, VAR_0, &VAR_15);
 if (VAR_16 != VAR_3)
  FUNC_2(VAR_16);
 VAR_14 = VAR_15;
 if (VAR_14 == ((void*)0) || VAR_14->conv == ((void*)0)) {
  FUNC_3(VAR_1, "no conversation function");
  FUNC_2(VAR_4);
 }
 FUNC_6(VAR_10, VAR_2, VAR_8, VAR_9);
 VAR_11.msg_style = VAR_6;
 VAR_11.msg = VAR_10;
 VAR_12 = &VAR_11;
 VAR_13 = ((void*)0);
 VAR_16 = (VAR_14->conv)(1, &VAR_12, &VAR_13, VAR_14->appdata_ptr);
 *VAR_7 = VAR_13 == ((void*)0) ? ((void*)0) : VAR_13->resp;
 FUNC_1(VAR_13);
 FUNC_2(VAR_16);
}
