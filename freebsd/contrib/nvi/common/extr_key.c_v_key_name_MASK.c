
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* u_char ;
typedef int * iconv_src_t ;
struct TYPE_7__ {int * id; } ;
struct TYPE_8__ {scalar_t__ lastc; char* cname; size_t clen; TYPE_1__ conv; } ;
typedef TYPE_2__ SCR ;
typedef scalar_t__ ARG_CHAR_T ;


 scalar_t__ FUNC_0 (TYPE_2__*,scalar_t__) ;
 size_t VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 size_t VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,int *,size_t*,char**,size_t*) ;
 scalar_t__ FUNC_8 (int) ;
 size_t FUNC_9 (char*,int,char*,int) ;
 int FUNC_10 (int ,char*) ;
 int * FUNC_11 (char*,char*) ;
 size_t FUNC_12 (char*,scalar_t__) ;

char *
FUNC_13(
 SCR *VAR_5,
 ARG_CHAR_T VAR_6)
{
 static const char VAR_7[] = "0123456789abcdef";
 static const char VAR_8[] = "01234567";
 int VAR_9;
 size_t VAR_10;
 char *VAR_11;





 if (VAR_6 && VAR_5->lastc == VAR_6)
  return (VAR_5->cname);
 VAR_5->lastc = VAR_6;





  VAR_5->cname[(VAR_10 = 1)-1] = (u_char)VAR_6;

 VAR_9 = (u_char)VAR_5->cname[0];
 VAR_5->cname[VAR_10] = '\0';


 if ((VAR_11 = FUNC_3(VAR_5, VAR_4)) != ((void*)0))
  if (FUNC_11(VAR_11, VAR_5->cname) != ((void*)0))
   goto done;
 if ((VAR_11 = FUNC_3(VAR_5, VAR_2)) != ((void*)0))
  if (FUNC_11(VAR_11, VAR_5->cname) != ((void*)0))
   goto nopr;
 if (FUNC_0(VAR_5, VAR_6))
  goto done;
nopr: if (FUNC_8(VAR_9) && (VAR_9 < 0x20 || VAR_9 == 0x7f)) {
  VAR_5->cname[0] = '^';
  VAR_5->cname[1] = VAR_9 == 0x7f ? '?' : '@' + VAR_9;
  VAR_10 = 2;
  goto done;
 }
 if (FUNC_2(VAR_5, VAR_3)) {
  VAR_5->cname[0] = '\\';
  VAR_5->cname[1] = VAR_8[(VAR_9 & 0300) >> 6];
  VAR_5->cname[2] = VAR_8[(VAR_9 & 070) >> 3];
  VAR_5->cname[3] = VAR_8[ VAR_9 & 07 ];
 } else {
  VAR_5->cname[0] = '\\';
  VAR_5->cname[1] = 'x';
  VAR_5->cname[2] = VAR_7[(VAR_9 & 0xf0) >> 4];
  VAR_5->cname[3] = VAR_7[ VAR_9 & 0x0f ];
 }
 VAR_10 = 4;
done: VAR_5->cname[VAR_5->clen = VAR_10] = '\0';
 return (VAR_5->cname);
}
