
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char const* uintmax_t ;
typedef scalar_t__ uint8_t ;
struct ipfw_nptv6_stats {scalar_t__ dropped; scalar_t__ ex2in; scalar_t__ in2ex; } ;
struct TYPE_2__ {scalar_t__ use_set; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (char const*,scalar_t__,struct ipfw_nptv6_stats*) ;
 int FUNC_2 (char*,char const*) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_2, uint8_t VAR_3)
{
 struct ipfw_nptv6_stats VAR_4;

 if (FUNC_1(VAR_2, VAR_3, &VAR_4) != 0)
  FUNC_0(VAR_0, "Error retrieving stats");

 if (VAR_1.use_set != 0 || VAR_3 != 0)
  FUNC_2("set %u ", VAR_3);
 FUNC_2("nptv6 %s\n", VAR_2);
 FUNC_2("\t%ju packets translated (internal to external)\n",
     (uintmax_t)VAR_4.in2ex);
 FUNC_2("\t%ju packets translated (external to internal)\n",
     (uintmax_t)VAR_4.ex2in);
 FUNC_2("\t%ju packets dropped due to some error\n",
     (uintmax_t)VAR_4.dropped);
}
