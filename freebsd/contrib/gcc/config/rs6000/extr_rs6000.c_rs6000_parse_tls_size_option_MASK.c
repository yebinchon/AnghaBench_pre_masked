
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int error (char*,scalar_t__) ;
 int rs6000_tls_size ;
 scalar_t__ rs6000_tls_size_string ;
 scalar_t__ strcmp (scalar_t__,char*) ;

__attribute__((used)) static void
rs6000_parse_tls_size_option (void)
{
  if (rs6000_tls_size_string == 0)
    return;
  else if (strcmp (rs6000_tls_size_string, "16") == 0)
    rs6000_tls_size = 16;
  else if (strcmp (rs6000_tls_size_string, "32") == 0)
    rs6000_tls_size = 32;
  else if (strcmp (rs6000_tls_size_string, "64") == 0)
    rs6000_tls_size = 64;
  else
    error ("bad value %qs for -mtls-size switch", rs6000_tls_size_string);
}
