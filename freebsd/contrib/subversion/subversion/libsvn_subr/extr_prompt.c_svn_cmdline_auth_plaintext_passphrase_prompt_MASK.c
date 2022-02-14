
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 char* FUNC_0 (char*) ;
 int * FUNC_1 (int *,char const*,char const*,char const*,void*,int *) ;

svn_error_t *
FUNC_2(svn_boolean_t *VAR_0,
                                             const char *VAR_1,
                                             void *VAR_2,
                                             apr_pool_t *VAR_3)
{
  const char *VAR_4 = FUNC_0("Store passphrase unencrypted (yes/no)? ");
  const char *VAR_5 =
  FUNC_0("\n-----------------------------------------------------------------------\n"
    "ATTENTION!  Your passphrase for client certificate:\n"
    "\n"
    "   %s\n"
    "\n"
    "can only be stored to disk unencrypted!  You are advised to configure\n"
    "your system so that Subversion can store passphrase encrypted, if\n"
    "possible.  See the documentation for details.\n"
    "\n"
    "You can avoid future appearances of this warning by setting the value\n"
    "of the 'store-ssl-client-cert-pp-plaintext' option to either 'yes' or\n"
    "'no' in '%s'.\n"
    "-----------------------------------------------------------------------\n"
    );

  return FUNC_1(VAR_0, VAR_1,
                                 VAR_4, VAR_5, VAR_2,
                                 VAR_3);
}
