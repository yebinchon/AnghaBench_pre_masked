
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ms; int s; int addr; int ad_type; int e_mod; int e_type; int version; int size; } ;
struct TYPE_6__ {TYPE_1__ hdr64_ex; } ;
struct TYPE_7__ {TYPE_2__ tt; int id; } ;
typedef TYPE_3__ tokenstr_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (int *,int ,char*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *,int ,int) ;
 int FUNC_10 (int *,int ,int) ;
 int FUNC_11 (int *,int ,char*,int) ;

__attribute__((used)) static void
FUNC_12(FILE *VAR_1, tokenstr_t *VAR_2, char *VAR_3, int VAR_4)
{

 FUNC_11(VAR_1, VAR_2->id, "header_ex", VAR_4);
 if (VAR_4 & VAR_0) {
  FUNC_2(VAR_1, "version");
  FUNC_3(VAR_1, VAR_2->tt.hdr64_ex.version, "%u");
  FUNC_0(VAR_1);
  FUNC_2(VAR_1, "event");
  FUNC_6(VAR_1, VAR_2->tt.hdr64_ex.e_type, VAR_4);
  FUNC_0(VAR_1);
  FUNC_2(VAR_1, "modifier");
  FUNC_7(VAR_1, VAR_2->tt.hdr64_ex.e_mod, VAR_4);
  FUNC_0(VAR_1);
  FUNC_2(VAR_1, "host");
  FUNC_8(VAR_1, VAR_2->tt.hdr64_ex.ad_type,
      VAR_2->tt.hdr64_ex.addr);
  FUNC_0(VAR_1);
  FUNC_2(VAR_1, "time");
  FUNC_10(VAR_1, VAR_2->tt.hdr64_ex.s, VAR_4);
  FUNC_0(VAR_1);
  FUNC_2(VAR_1, "msec");
  FUNC_9(VAR_1, VAR_2->tt.hdr64_ex.ms, VAR_4);
  FUNC_0(VAR_1);
  FUNC_1(VAR_1, VAR_2->id);
 } else {
  FUNC_5(VAR_1, VAR_3);
  FUNC_4(VAR_1, VAR_2->tt.hdr64_ex.size, "%u");
  FUNC_5(VAR_1, VAR_3);
  FUNC_3(VAR_1, VAR_2->tt.hdr64_ex.version, "%u");
  FUNC_5(VAR_1, VAR_3);
  FUNC_6(VAR_1, VAR_2->tt.hdr64_ex.e_type, VAR_4);
  FUNC_5(VAR_1, VAR_3);
  FUNC_7(VAR_1, VAR_2->tt.hdr64_ex.e_mod, VAR_4);
  FUNC_5(VAR_1, VAR_3);
  FUNC_8(VAR_1, VAR_2->tt.hdr64_ex.ad_type,
      VAR_2->tt.hdr64_ex.addr);
  FUNC_5(VAR_1, VAR_3);
  FUNC_10(VAR_1, VAR_2->tt.hdr64_ex.s, VAR_4);
  FUNC_5(VAR_1, VAR_3);
  FUNC_9(VAR_1, VAR_2->tt.hdr64_ex.ms, VAR_4);
 }
}
