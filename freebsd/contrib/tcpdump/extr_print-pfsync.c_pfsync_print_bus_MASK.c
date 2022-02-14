
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pfsync_bus {int status; int creatorid; int endtime; } ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;


 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(netdissect_options *VAR_0, const void *VAR_1)
{
 const struct pfsync_bus *VAR_2 = VAR_1;
 uint32_t VAR_3;
 int VAR_4, VAR_5;
 const char *VAR_6;

 VAR_3 = FUNC_2(VAR_2->endtime);
 VAR_5 = VAR_3 % 60;
 VAR_3 /= 60;
 VAR_4 = VAR_3 % 60;
 VAR_3 /= 60;

 switch (VAR_2->status) {
 case 128:
  VAR_6 = "start";
  break;
 case 129:
  VAR_6 = "end";
  break;
 default:
  VAR_6 = "UNKNOWN";
  break;
 }

 FUNC_0((VAR_0, "\n\tcreatorid: %08x age: %.2u:%.2u:%.2u status: %s",
     FUNC_1(VAR_2->creatorid), VAR_3, VAR_4, VAR_5, VAR_6));
}
