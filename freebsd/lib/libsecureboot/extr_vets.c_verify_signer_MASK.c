
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int br_x509_pkey ;
typedef int br_x509_certificate ;
typedef int br_name_element ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,size_t) ;
 int VAR_0 ;
 int FUNC_2 (int *,size_t) ;
 int * FUNC_3 (char const*,size_t*) ;
 int VAR_1 ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int * FUNC_6 (int *,size_t,int *,size_t,int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static br_x509_pkey *
FUNC_8(const char *VAR_2,
    br_name_element *VAR_3, size_t VAR_4)
{
 br_x509_certificate *VAR_5;
 br_x509_pkey *VAR_6;
 size_t VAR_7;

 VAR_6 = ((void*)0);

 FUNC_5();
 VAR_5 = FUNC_3(VAR_2, &VAR_7);
 if (VAR_5 == ((void*)0)) {
  FUNC_4("cannot read certificates\n");
  return (((void*)0));
 }







 if (FUNC_0(VAR_0) > 0)
  VAR_6 = FUNC_6(VAR_5, VAR_7, VAR_3, VAR_4, &VAR_0);
 if (VAR_6 != ((void*)0)) {
  FUNC_4("Certificate is on forbidden list\n");
  FUNC_7(VAR_6);
  VAR_6 = ((void*)0);
  goto out;
 }

 VAR_6 = FUNC_6(VAR_5, VAR_7, VAR_3, VAR_4, &VAR_1);
 if (VAR_6 == ((void*)0))
  goto out;





 if (FUNC_1(VAR_5, VAR_7)) {
  FUNC_4("Certificate hash is on forbidden list\n");
  FUNC_7(VAR_6);
  VAR_6 = ((void*)0);
 }
out:
 FUNC_2(VAR_5, VAR_7);
 return (VAR_6);
}
