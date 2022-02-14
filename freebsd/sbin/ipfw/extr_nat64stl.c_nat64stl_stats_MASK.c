
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char const* uintmax_t ;
typedef scalar_t__ uint8_t ;
struct ipfw_nat64stl_stats {scalar_t__ dropped; scalar_t__ nomem; scalar_t__ noproto; scalar_t__ noroute6; scalar_t__ noroute4; scalar_t__ oerrors; scalar_t__ ifrags; scalar_t__ ofrags; scalar_t__ opcnt46; scalar_t__ opcnt64; } ;
struct TYPE_2__ {scalar_t__ use_set; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (char const*,scalar_t__,struct ipfw_nat64stl_stats*) ;
 int FUNC_2 (char*,char const*) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_2, uint8_t VAR_3)
{
 struct ipfw_nat64stl_stats VAR_4;

 if (FUNC_1(VAR_2, VAR_3, &VAR_4) != 0)
  FUNC_0(VAR_0, "Error retrieving stats");

 if (VAR_1.use_set != 0 || VAR_3 != 0)
  FUNC_2("set %u ", VAR_3);
 FUNC_2("nat64stl %s\n", VAR_2);

 FUNC_2("\t%ju packets translated from IPv6 to IPv4\n",
     (uintmax_t)VAR_4.opcnt64);
 FUNC_2("\t%ju packets translated from IPv4 to IPv6\n",
     (uintmax_t)VAR_4.opcnt46);
 FUNC_2("\t%ju IPv6 fragments created\n",
     (uintmax_t)VAR_4.ofrags);
 FUNC_2("\t%ju IPv4 fragments received\n",
     (uintmax_t)VAR_4.ifrags);
 FUNC_2("\t%ju output packets dropped due to no bufs, etc.\n",
     (uintmax_t)VAR_4.oerrors);
 FUNC_2("\t%ju output packets discarded due to no IPv4 route\n",
     (uintmax_t)VAR_4.noroute4);
 FUNC_2("\t%ju output packets discarded due to no IPv6 route\n",
     (uintmax_t)VAR_4.noroute6);
 FUNC_2("\t%ju packets discarded due to unsupported protocol\n",
     (uintmax_t)VAR_4.noproto);
 FUNC_2("\t%ju packets discarded due to memory allocation problems\n",
     (uintmax_t)VAR_4.nomem);
 FUNC_2("\t%ju packets discarded due to some errors\n",
     (uintmax_t)VAR_4.dropped);
}
