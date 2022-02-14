
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun_disklabel {int sdkp_nsectors; int sl_ncylinders; int sl_ntracks; int sl_nsectors; scalar_t__ sl_magic; struct sun_disklabel* sl_part; scalar_t__ sdkp_cyloffset; } ;
typedef int sl ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sun_disklabel*,int) ;
 int VAR_7 ;
 int FUNC_1 (struct sun_disklabel*,char const*,char const*) ;
 int VAR_8 ;
 int FUNC_2 (int,char*,char const*,...) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int,char**,char*) ;
 int VAR_9 ;
 int VAR_10 ;
 char* VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_5 (struct sun_disklabel*,char const*) ;
 int FUNC_6 (struct sun_disklabel*,char const*,int ) ;
 int FUNC_7 (struct sun_disklabel*,char const*) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_8 (char*,char*) ;
 int FUNC_9 () ;
 int VAR_15 ;
 int FUNC_10 (struct sun_disklabel*,char const*,char const*) ;

int
FUNC_11(int VAR_16, char **VAR_17)
{
 struct sun_disklabel VAR_18;
 const char *VAR_19;
 const char *VAR_20;
 const char *VAR_21;
 int VAR_22;

 VAR_19 = VAR_4;
 while ((VAR_22 = FUNC_4(VAR_16, VAR_17, "b:BcehnrRw")) != -1)
  switch (VAR_22) {
  case 'b':
   VAR_6 = 1;
   VAR_19 = VAR_11;
   break;
  case 'B':
   VAR_0 = 1;
   break;
  case 'c':
   VAR_7 = 1;
   break;
  case 'e':
   VAR_8 = 1;
   break;
  case 'h':
   VAR_9 = 1;
   break;
  case 'n':
   VAR_10 = 1;
   break;
  case 'r':
   FUNC_3(VAR_13, "Obsolete -r flag ignored\n");
   break;
  case 'R':
   VAR_1 = 1;
   break;
  case 'w':
   VAR_15 = 1;
   break;
  default:
   FUNC_9();
   break;
  }
 if (VAR_6 && !VAR_0)
  FUNC_9();
 if (VAR_10 && !(VAR_0 || VAR_8 || VAR_1 || VAR_15))
  FUNC_9();
 if (VAR_8 && (VAR_1 || VAR_15))
  FUNC_9();
 if (VAR_8)
  VAR_9 = 0;
 VAR_16 -= VAR_12;
 VAR_17 += VAR_12;
 if (VAR_16 == 0)
  FUNC_9();
 FUNC_0(&VAR_18, sizeof(VAR_18));
 VAR_21 = VAR_17[0];
 if (VAR_15) {
  if (VAR_16 != 2 || FUNC_8(VAR_17[1], "auto") != 0)
   FUNC_9();
  FUNC_7(&VAR_18, VAR_21);
  FUNC_0(VAR_18.sl_part, sizeof(VAR_18.sl_part));
  VAR_18.sl_part[VAR_3].sdkp_cyloffset = 0;
  VAR_18.sl_part[VAR_3].sdkp_nsectors = VAR_18.sl_ncylinders *
      VAR_18.sl_ntracks * VAR_18.sl_nsectors;
  FUNC_10(&VAR_18, VAR_21, VAR_19);
 } else if (VAR_8) {
  if (VAR_16 != 1)
   FUNC_9();
  FUNC_7(&VAR_18, VAR_21);
  if (VAR_18.sl_magic != VAR_2)
   FUNC_2(1, "%s%s has no sun disklabel", VAR_5, VAR_21);
  FUNC_1(&VAR_18, VAR_21, VAR_19);
 } else if (VAR_1) {
  if (VAR_16 != 2)
   FUNC_9();
  VAR_20 = VAR_17[1];
  FUNC_7(&VAR_18, VAR_21);
  if (FUNC_5(&VAR_18, VAR_20) != 0)
   FUNC_2(1, "%s: invalid label", VAR_20);
  FUNC_10(&VAR_18, VAR_21, VAR_19);
 } else if (VAR_0) {
  FUNC_7(&VAR_18, VAR_21);
  if (VAR_18.sl_magic != VAR_2)
   FUNC_2(1, "%s%s has no sun disklabel", VAR_5, VAR_21);
  FUNC_10(&VAR_18, VAR_21, VAR_19);
 } else {
  FUNC_7(&VAR_18, VAR_21);
  if (VAR_18.sl_magic != VAR_2)
   FUNC_2(1, "%s%s has no sun disklabel", VAR_5, VAR_21);
  FUNC_6(&VAR_18, VAR_21, VAR_14);
 }
 return (0);
}
