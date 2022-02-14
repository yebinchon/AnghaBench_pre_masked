
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int s_addr; } ;
struct TYPE_4__ {TYPE_1__ sin_addr; int sin_family; } ;
struct pkt {TYPE_2__ sa4; int refid; } ;
struct kod_entry {int type; } ;
typedef struct pkt sockaddr_u ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char const*,int ,int) ;
 int VAR_2 ;
 int FUNC_2 (struct pkt) ;
 int FUNC_3 (int,struct pkt*,struct pkt*,char const*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int *,char const*,int) ;
 int FUNC_7 (char const*,struct kod_entry**) ;

void
FUNC_8(void)
{
 static const char * VAR_3 = "192.0.2.1";
 static const char * VAR_4 = "DENY";
 struct pkt VAR_5;
 sockaddr_u VAR_6;
 int VAR_7;
 struct kod_entry * VAR_8;

 VAR_7 = VAR_1;
 FUNC_2(VAR_5);
 FUNC_6(&VAR_5.refid, VAR_4, 4);
 FUNC_2(VAR_6);
 VAR_6.sa4.sin_family = VAR_0;
 VAR_6.sa4.sin_addr.s_addr = FUNC_4(VAR_3);


 FUNC_5("/dev/null", VAR_2);

 FUNC_0(1, FUNC_3(VAR_7, &VAR_5, &VAR_6, VAR_3));

 FUNC_0(1, FUNC_7(VAR_3, &VAR_8));
 FUNC_1(VAR_4, VAR_8->type, 4);
}
