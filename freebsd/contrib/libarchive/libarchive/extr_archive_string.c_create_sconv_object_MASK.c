
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_string_conv {unsigned int from_cp; unsigned int to_cp; int same; scalar_t__ cd_w; scalar_t__ cd; int flag; int utftmp; struct archive_string_conv* from_charset; int * to_charset; int * next; } ;
typedef scalar_t__ iconv_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (unsigned int) ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int *) ;
 struct archive_string_conv* FUNC_2 (int,int) ;
 int FUNC_3 (struct archive_string_conv*) ;
 void* FUNC_4 (char const*,char const*) ;
 void* FUNC_5 (char const*) ;
 int FUNC_6 (struct archive_string_conv*) ;
 scalar_t__ FUNC_7 (char const*,char const*) ;
 void* FUNC_8 (char const*) ;

__attribute__((used)) static struct archive_string_conv *
FUNC_9(const char *VAR_17, const char *VAR_18,
    unsigned VAR_19, int VAR_20)
{
 struct archive_string_conv *VAR_21;

 VAR_21 = FUNC_2(1, sizeof(*VAR_21));
 if (VAR_21 == ((void*)0))
  return (((void*)0));
 VAR_21->next = ((void*)0);
 VAR_21->from_charset = FUNC_8(VAR_17);
 if (VAR_21->from_charset == ((void*)0)) {
  FUNC_3(VAR_21);
  return (((void*)0));
 }
 VAR_21->to_charset = FUNC_8(VAR_18);
 if (VAR_21->to_charset == ((void*)0)) {
  FUNC_3(VAR_21->from_charset);
  FUNC_3(VAR_21);
  return (((void*)0));
 }
 FUNC_1(&VAR_21->utftmp);

 if (VAR_20 & VAR_11) {




  VAR_21->from_cp = VAR_19;
  VAR_21->to_cp = FUNC_5(VAR_18);




 } else if (VAR_20 & VAR_4) {




  VAR_21->to_cp = VAR_19;
  VAR_21->from_cp = FUNC_5(VAR_17);




 }




 if (FUNC_7(VAR_17, VAR_18) == 0 ||
     (VAR_21->from_cp != (unsigned)-1 && VAR_21->from_cp == VAR_21->to_cp))
  VAR_21->same = 1;
 else
  VAR_21->same = 0;




 if (FUNC_7(VAR_18, "UTF-8") == 0)
  VAR_20 |= VAR_15;
 else if (FUNC_7(VAR_18, "UTF-16BE") == 0)
  VAR_20 |= VAR_13;
 else if (FUNC_7(VAR_18, "UTF-16LE") == 0)
  VAR_20 |= VAR_14;
 if (FUNC_7(VAR_17, "UTF-8") == 0)
  VAR_20 |= VAR_8;
 else if (FUNC_7(VAR_17, "UTF-16BE") == 0)
  VAR_20 |= VAR_6;
 else if (FUNC_7(VAR_17, "UTF-16LE") == 0)
  VAR_20 |= VAR_7;
 if ((VAR_20 & VAR_4) &&
     (VAR_20 & (VAR_5 | VAR_8))) {





   VAR_20 |= VAR_9;
 }
 VAR_21->flag = VAR_20;




 FUNC_6(VAR_21);

 return (VAR_21);
}
