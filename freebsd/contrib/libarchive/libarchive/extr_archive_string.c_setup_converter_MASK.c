
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_string_conv {int flag; scalar_t__ cd; scalar_t__ nconverter; scalar_t__ same; } ;
typedef scalar_t__ iconv_t ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct archive_string_conv*,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;

__attribute__((used)) static void
FUNC_1(struct archive_string_conv *VAR_29)
{


 VAR_29->nconverter = 0;





 if (VAR_29->flag & VAR_11) {
  FUNC_0(VAR_29, VAR_22);
  return;
 }




 if (VAR_29->flag & VAR_8) {




  if (VAR_29->flag & VAR_5) {
   FUNC_0(VAR_29, VAR_13);
   return;
  }
  if (VAR_29->flag & VAR_0) {
   if (VAR_29->flag & VAR_9)
    FUNC_0(VAR_29,
     VAR_19);
   else
    FUNC_0(VAR_29,
     VAR_20);
  } else

   VAR_29->nconverter = 0;
  return;
 }




 if (VAR_29->flag & VAR_2) {



  if (VAR_29->flag & VAR_7)
   FUNC_0(VAR_29,VAR_15);
  else if (VAR_29->flag & VAR_6)
   FUNC_0(VAR_29, VAR_14);

  if (VAR_29->flag & VAR_10) {




   if (!(VAR_29->flag &
       (VAR_7 |VAR_6)))
    FUNC_0(VAR_29,
        VAR_13);
   return;
  }
  if ((VAR_29->flag & (VAR_0 | VAR_3))
      == (VAR_0 | VAR_3))
   FUNC_0(VAR_29, VAR_16);
  else if ((VAR_29->flag & (VAR_0 | VAR_4))
      == (VAR_0 | VAR_4))
   FUNC_0(VAR_29, VAR_17);
  else

   VAR_29->nconverter = 0;
  return;
 }

 if (VAR_29->flag & VAR_5) {



  if (VAR_29->flag & VAR_7)
   FUNC_0(VAR_29,VAR_15);
  else if (VAR_29->flag & VAR_6)
   FUNC_0(VAR_29, VAR_14);







  if (VAR_29->flag & VAR_10) {




   if (!(VAR_29->flag &
       (VAR_7 |VAR_6)))
    FUNC_0(VAR_29, VAR_23);
   return;
  }
 }
 if ((VAR_29->flag & VAR_0) || VAR_29->same)
  FUNC_0(VAR_29, VAR_18);
 else

  VAR_29->nconverter = 0;
}
