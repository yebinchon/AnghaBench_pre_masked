
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
struct dsk {scalar_t__ start; } ;
struct TYPE_7__ {scalar_t__ hdr_lba_self; int hdr_lba_alt; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dsk*) ;
 int FUNC_1 (char*,struct dsk*,TYPE_1__*,int ) ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_2 (char*,struct dsk*,TYPE_1__*,int) ;
 scalar_t__ FUNC_3 (char*,struct dsk*,TYPE_1__*,int ) ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_1__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (char*,char*) ;
 char* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

int
FUNC_5(struct dsk *VAR_12, char *VAR_13)
{
 uint64_t VAR_14;





 VAR_9 = VAR_13;
 VAR_8 = VAR_6 = 0;
 VAR_2 = -1;
 VAR_1 = 1;
 VAR_12->start = 0;

 if (FUNC_2("primary", VAR_12, &VAR_7, 1) == 0 &&
     FUNC_3("primary", VAR_12, &VAR_7, VAR_11) == 0) {
  VAR_8 = VAR_7.hdr_lba_self;
  VAR_3 = &VAR_7;
  VAR_4 = VAR_11;
 }

 if (VAR_8 > 0) {




  VAR_14 = VAR_7.hdr_lba_alt;
 } else {
  VAR_14 = FUNC_0(VAR_12);
  if (VAR_14 > 0)
   VAR_14--;
 }
 if (VAR_14 == 0)
  FUNC_4("%s: unable to locate backup GPT header\n", VAR_0);
 else if (FUNC_2("backup", VAR_12, &VAR_5, VAR_14) == 0 &&
     FUNC_3("backup", VAR_12, &VAR_5, VAR_10) == 0) {
  VAR_6 = VAR_5.hdr_lba_self;
  if (VAR_8 == 0) {
   VAR_3 = &VAR_5;
   VAR_4 = VAR_10;
   FUNC_4("%s: using backup GPT\n", VAR_0);
  }
 }
 if (VAR_8 != 0)
  FUNC_1("primary", VAR_12, &VAR_7, VAR_11);
 if (VAR_6 != 0)
  FUNC_1("backup", VAR_12, &VAR_5, VAR_10);

 if (VAR_8 == 0 && VAR_6 == 0)
  return (-1);
 return (0);
}
