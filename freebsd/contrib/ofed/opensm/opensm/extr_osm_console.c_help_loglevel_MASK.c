
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


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
 int FUNC_0 (int *,char*,...) ;

__attribute__((used)) static void FUNC_1(FILE * VAR_10, int VAR_11)
{
 FUNC_0(VAR_10, "loglevel [<log-level>]\n");
 if (VAR_11) {
  FUNC_0(VAR_10, "   log-level is OR'ed from the following\n");
  FUNC_0(VAR_10, "   OSM_LOG_NONE             0x%02X\n",
   VAR_6);
  FUNC_0(VAR_10, "   OSM_LOG_ERROR            0x%02X\n",
   VAR_2);
  FUNC_0(VAR_10, "   OSM_LOG_INFO             0x%02X\n",
   VAR_5);
  FUNC_0(VAR_10, "   OSM_LOG_VERBOSE          0x%02X\n",
   VAR_9);
  FUNC_0(VAR_10, "   OSM_LOG_DEBUG            0x%02X\n",
   VAR_0);
  FUNC_0(VAR_10, "   OSM_LOG_FUNCS            0x%02X\n",
   VAR_4);
  FUNC_0(VAR_10, "   OSM_LOG_FRAMES           0x%02X\n",
   VAR_3);
  FUNC_0(VAR_10, "   OSM_LOG_ROUTING          0x%02X\n",
   VAR_7);
  FUNC_0(VAR_10, "   OSM_LOG_SYS              0x%02X\n",
   VAR_8);
  FUNC_0(VAR_10, "\n");
  FUNC_0(VAR_10, "   OSM_LOG_DEFAULT_LEVEL    0x%02X\n",
   VAR_1);
 }
}
