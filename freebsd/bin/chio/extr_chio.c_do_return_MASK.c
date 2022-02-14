
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct changer_move {int cm_tounit; int cm_totype; scalar_t__ cm_fromunit; scalar_t__ cm_fromtype; } ;
struct changer_element_status {int ces_flags; int ces_source_addr; int ces_source_type; } ;
typedef int cmd ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int,char*,char const*) ;
 int FUNC_2 (char*,scalar_t__*,scalar_t__*) ;
 int FUNC_3 (int ,char*,char*,char const*) ;
 int FUNC_4 (struct changer_element_status*) ;
 struct changer_element_status* FUNC_5 (unsigned int,unsigned int,int) ;
 char* FUNC_6 () ;
 int FUNC_7 (int ,int ,struct changer_move*) ;
 int FUNC_8 (struct changer_move*,int ,int) ;
 scalar_t__ FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char*) ;
 int VAR_5 ;
 int FUNC_11 (char*,char const*) ;

__attribute__((used)) static int
FUNC_12(const char *VAR_6, int VAR_7, char **VAR_8)
{
 struct changer_element_status *VAR_9;
 struct changer_move VAR_10;
 uint16_t VAR_11, VAR_12;

 ++VAR_8; --VAR_7;

 if (VAR_7 < 2) {
  FUNC_11("%s: too few arguments", VAR_6);
  goto usage;
 } else if (VAR_7 > 3) {
  FUNC_11("%s: too many arguments", VAR_6);
  goto usage;
 }

 VAR_11 = FUNC_9(*VAR_8);
 ++VAR_8; --VAR_7;


 if (VAR_1 == VAR_11) {
  FUNC_2(*VAR_8, &VAR_11, &VAR_12);
 } else {
  VAR_12 = FUNC_10(*VAR_8);
 }
 ++VAR_8; --VAR_7;


 VAR_9 = FUNC_5((unsigned int)VAR_11, (unsigned int)VAR_12,
     VAR_1 == VAR_11);

 if (((void*)0) == VAR_9)
  FUNC_1(1, "%s: null element status pointer", VAR_6);

 if (!(VAR_9->ces_flags & VAR_0))
  FUNC_1(1, "%s: no source information", VAR_6);

 (void) FUNC_8(&VAR_10, 0, sizeof(VAR_10));

 VAR_10.cm_fromtype = VAR_11;
 VAR_10.cm_fromunit = VAR_12;
 VAR_10.cm_totype = VAR_9->ces_source_type;
 VAR_10.cm_tounit = VAR_9->ces_source_addr;

 if (FUNC_7(VAR_3, VAR_2, &VAR_10) == -1)
  FUNC_0(1, "%s: CHIOMOVE", VAR_4);
 FUNC_4(VAR_9);

 return(0);

usage:
 (void) FUNC_3(VAR_5, "usage: %s %s "
     "<from ET> <from EU>\n", FUNC_6(), VAR_6);
 return(1);
}
