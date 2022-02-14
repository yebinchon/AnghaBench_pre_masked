
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct delegpt {int has_parent_side_NS; } ;


 int FUNC_0 (struct delegpt*,char*,char*) ;
 struct delegpt* FUNC_1 (int *) ;
 int FUNC_2 (struct delegpt*) ;

__attribute__((used)) static struct delegpt*
FUNC_3(int VAR_0, int VAR_1)
{
 struct delegpt* VAR_2 = FUNC_1((uint8_t*)"\000");
 if(!VAR_2)
  return ((void*)0);
 VAR_2->has_parent_side_NS = 1;
      if(VAR_0) {
 if(!FUNC_0(VAR_2, "A.ROOT-SERVERS.NET.", "198.41.0.4")) goto failed;
 if(!FUNC_0(VAR_2, "B.ROOT-SERVERS.NET.", "199.9.14.201")) goto failed;
 if(!FUNC_0(VAR_2, "C.ROOT-SERVERS.NET.", "192.33.4.12")) goto failed;
 if(!FUNC_0(VAR_2, "D.ROOT-SERVERS.NET.", "199.7.91.13")) goto failed;
 if(!FUNC_0(VAR_2, "E.ROOT-SERVERS.NET.", "192.203.230.10")) goto failed;
 if(!FUNC_0(VAR_2, "F.ROOT-SERVERS.NET.", "192.5.5.241")) goto failed;
 if(!FUNC_0(VAR_2, "G.ROOT-SERVERS.NET.", "192.112.36.4")) goto failed;
 if(!FUNC_0(VAR_2, "H.ROOT-SERVERS.NET.", "198.97.190.53")) goto failed;
 if(!FUNC_0(VAR_2, "I.ROOT-SERVERS.NET.", "192.36.148.17")) goto failed;
 if(!FUNC_0(VAR_2, "J.ROOT-SERVERS.NET.", "192.58.128.30")) goto failed;
 if(!FUNC_0(VAR_2, "K.ROOT-SERVERS.NET.", "193.0.14.129")) goto failed;
 if(!FUNC_0(VAR_2, "L.ROOT-SERVERS.NET.", "199.7.83.42")) goto failed;
 if(!FUNC_0(VAR_2, "M.ROOT-SERVERS.NET.", "202.12.27.33")) goto failed;
      }
      if(VAR_1) {
 if(!FUNC_0(VAR_2, "A.ROOT-SERVERS.NET.", "2001:503:ba3e::2:30")) goto failed;
 if(!FUNC_0(VAR_2, "B.ROOT-SERVERS.NET.", "2001:500:200::b")) goto failed;
 if(!FUNC_0(VAR_2, "C.ROOT-SERVERS.NET.", "2001:500:2::c")) goto failed;
 if(!FUNC_0(VAR_2, "D.ROOT-SERVERS.NET.", "2001:500:2d::d")) goto failed;
 if(!FUNC_0(VAR_2, "E.ROOT-SERVERS.NET.", "2001:500:a8::e")) goto failed;
 if(!FUNC_0(VAR_2, "F.ROOT-SERVERS.NET.", "2001:500:2f::f")) goto failed;
 if(!FUNC_0(VAR_2, "G.ROOT-SERVERS.NET.", "2001:500:12::d0d")) goto failed;
 if(!FUNC_0(VAR_2, "H.ROOT-SERVERS.NET.", "2001:500:1::53")) goto failed;
 if(!FUNC_0(VAR_2, "I.ROOT-SERVERS.NET.", "2001:7fe::53")) goto failed;
 if(!FUNC_0(VAR_2, "J.ROOT-SERVERS.NET.", "2001:503:c27::2:30")) goto failed;
 if(!FUNC_0(VAR_2, "K.ROOT-SERVERS.NET.", "2001:7fd::1")) goto failed;
 if(!FUNC_0(VAR_2, "L.ROOT-SERVERS.NET.", "2001:500:9f::42")) goto failed;
 if(!FUNC_0(VAR_2, "M.ROOT-SERVERS.NET.", "2001:dc3::35")) goto failed;
      }
 return VAR_2;
failed:
 FUNC_2(VAR_2);
 return 0;
}
