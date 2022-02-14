
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ForwardOptions {int gateway_ports; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static const char *
FUNC_2(const char *VAR_2, int *VAR_3,
    int VAR_4, struct ForwardOptions *VAR_5)
{
 const char *VAR_6 = ((void*)0);
 int VAR_7 = 0;

 if (VAR_2 == ((void*)0)) {

  if (VAR_5->gateway_ports)
   VAR_7 = 1;
 } else if (VAR_5->gateway_ports || VAR_4) {
  if (((VAR_1 & VAR_0) &&
      FUNC_1(VAR_2, "0.0.0.0") == 0 && VAR_4 == 0) ||
      *VAR_2 == '\0' || FUNC_1(VAR_2, "*") == 0 ||
      (!VAR_4 && VAR_5->gateway_ports == 1)) {
   VAR_7 = 1;




   if (*VAR_2 != '\0' &&
       FUNC_1(VAR_2, "0.0.0.0") != 0 &&
       FUNC_1(VAR_2, "*") != 0) {
    FUNC_0("Forwarding listen address "
        "\"%s\" overridden by server "
        "GatewayPorts", VAR_2);
   }
  } else if (FUNC_1(VAR_2, "localhost") != 0 ||
      FUNC_1(VAR_2, "127.0.0.1") == 0 ||
      FUNC_1(VAR_2, "::1") == 0) {

   VAR_6 = VAR_2;
  }
 } else if (FUNC_1(VAR_2, "127.0.0.1") == 0 ||
     FUNC_1(VAR_2, "::1") == 0) {





  VAR_6 = VAR_2;
 }
 if (VAR_3 != ((void*)0))
  *VAR_3 = VAR_7;
 return VAR_6;
}
