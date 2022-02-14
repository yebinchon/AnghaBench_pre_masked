
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_12__ {int gl; int gr; int singlegl; int singlegr; TYPE_1__* g; } ;
typedef TYPE_2__ _ISO2022State ;
struct TYPE_13__ {int flags; TYPE_4__* initg; } ;
typedef TYPE_3__ _ISO2022EncodingInfo ;
struct TYPE_14__ {int final; int interm; int type; } ;
typedef TYPE_4__ _ISO2022Charset ;
struct TYPE_11__ {int type; int final; char interm; } ;






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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_4__ VAR_16 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 TYPE_4__ VAR_17 ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,char*,size_t) ;
 int FUNC_5 (TYPE_3__*,TYPE_4__*) ;
 scalar_t__ FUNC_6 (char*,int) ;

__attribute__((used)) static int
FUNC_7(_ISO2022EncodingInfo * __restrict VAR_18, wchar_t VAR_19,
    char * __restrict VAR_20, size_t VAR_21, char ** __restrict VAR_22,
    _ISO2022State * __restrict VAR_23, size_t * __restrict VAR_24)
{
 _ISO2022Charset VAR_25;
 char *VAR_26;
 char VAR_27[VAR_15];
 size_t VAR_28;
 int VAR_29, VAR_30 = 0, VAR_31;
 unsigned char VAR_32;

 if (FUNC_0(VAR_19 & 0xff)) {

  VAR_25 = VAR_18->initg[0].final ? VAR_18->initg[0] : VAR_16;
 } else if (FUNC_1(VAR_19 & 0xff)) {

  VAR_25 = VAR_18->initg[1].final ? VAR_18->initg[1] : VAR_17;
 } else if (!(VAR_19 & ~0xff)) {
  if (VAR_19 & 0x80) {

   VAR_25 = VAR_17;
  } else {

   VAR_25 = VAR_16;
  }
 } else {
  VAR_25.final = (VAR_19 >> 24) & 0x7f;
  if ((VAR_19 >> 16) & 0x80)
   VAR_25.interm = (VAR_19 >> 16) & 0x7f;
  else
   VAR_25.interm = '\0';
  if (VAR_19 & 0x80)
   VAR_25.type = (VAR_19 & 0x00007f00) ? 128 : 129;
  else
   VAR_25.type = (VAR_19 & 0x00007f00) ? 130 : 131;
 }
 VAR_31 = FUNC_5(VAR_18, &VAR_25);
 VAR_26 = VAR_27;
 VAR_29 = VAR_18->flags & VAR_2;


 if (VAR_23->g[VAR_31].type == VAR_25.type &&
     VAR_23->g[VAR_31].final == VAR_25.final &&
     VAR_23->g[VAR_31].interm == VAR_25.interm)
  goto planeok;

 *VAR_26++ = '\033';
 if (VAR_25.type == 130 || VAR_25.type == 128)
  *VAR_26++ = '$';
 if (VAR_31 == 0 && VAR_25.type == 130 && FUNC_6("@AB", VAR_25.final) &&
     !VAR_25.interm && !(VAR_18->flags & VAR_10))
  ;
 else if (VAR_25.type == 131 || VAR_25.type == 130)
  *VAR_26++ = "()*+"[VAR_31];
 else
  *VAR_26++ = ",-./"[VAR_31];
 if (VAR_25.interm)
  *VAR_26++ = VAR_25.interm;
 *VAR_26++ = VAR_25.final;

 VAR_23->g[VAR_31].type = VAR_25.type;
 VAR_23->g[VAR_31].final = VAR_25.final;
 VAR_23->g[VAR_31].interm = VAR_25.interm;

planeok:

 if (VAR_23->gl == VAR_31)
  goto sideok;
 if (VAR_29 && VAR_23->gr == VAR_31)
  goto sideok;

 if (VAR_31 == 0 && (VAR_18->flags & VAR_3)) {
  *VAR_26++ = '\017';
  VAR_23->gl = 0;
 } else if (VAR_31 == 1 && (VAR_18->flags & VAR_4)) {
  *VAR_26++ = '\016';
  VAR_23->gl = 1;
 } else if (VAR_31 == 2 && (VAR_18->flags & VAR_6)) {
  *VAR_26++ = '\033';
  *VAR_26++ = 'n';
  VAR_23->gl = 2;
 } else if (VAR_31 == 3 && (VAR_18->flags & VAR_8)) {
  *VAR_26++ = '\033';
  *VAR_26++ = 'o';
  VAR_23->gl = 3;
 } else if (VAR_29 && VAR_31 == 1 && (VAR_18->flags & VAR_5)) {
  *VAR_26++ = '\033';
  *VAR_26++ = '~';
  VAR_23->gr = 1;
 } else if (VAR_29 && VAR_31 == 2 && (VAR_18->flags & VAR_7)) {
  *VAR_26++ = '\033';

  *VAR_26++ = '}';
  VAR_23->gr = 2;
 } else if (VAR_29 && VAR_31 == 3 && (VAR_18->flags & VAR_9)) {
  *VAR_26++ = '\033';
  *VAR_26++ = '|';
  VAR_23->gr = 3;
 } else if (VAR_31 == 2 && (VAR_18->flags & VAR_11)) {
  *VAR_26++ = '\033';
  *VAR_26++ = 'N';
  VAR_23->singlegl = 2;
 } else if (VAR_31 == 3 && (VAR_18->flags & VAR_13)) {
  *VAR_26++ = '\033';
  *VAR_26++ = 'O';
  VAR_23->singlegl = 3;
 } else if (VAR_29 && VAR_31 == 2 && (VAR_18->flags & VAR_12)) {
  *VAR_26++ = '\216';
  *VAR_26++ = 'N';
  VAR_23->singlegl = VAR_23->singlegr = 2;
 } else if (VAR_29 && VAR_31 == 3 && (VAR_18->flags & VAR_14)) {
  *VAR_26++ = '\217';
  *VAR_26++ = 'O';
  VAR_23->singlegl = VAR_23->singlegr = 3;
 } else
  goto ilseq;

sideok:
 if (VAR_23->singlegl == VAR_31)
  VAR_32 = 0x00;
 else if (VAR_23->singlegr == VAR_31)
  VAR_32 = 0x80;
 else if (VAR_23->gl == VAR_31)
  VAR_32 = 0x00;
 else if ((VAR_18->flags & VAR_2) && VAR_23->gr == VAR_31)
  VAR_32 = 0x80;
 else
  goto ilseq;

 switch (VAR_25.type) {
 case 131:
 case 129:
  VAR_30 = 1;
  break;
 case 130:
 case 128:
  VAR_30 = !FUNC_2(VAR_19 & 0xff) ?
      (FUNC_3(VAR_25.final) ? 3 : 2) : 1;
  break;
 }
 while (VAR_30-- > 0)
  *VAR_26++ = ((VAR_19 >> (VAR_30 << 3)) & 0x7f) | VAR_32;


 VAR_23->singlegl = VAR_23->singlegr = -1;

 VAR_28 = (size_t)(VAR_26 - VAR_27);
 if (VAR_21 < VAR_28) {
  if (VAR_22)
   *VAR_22 = (char *)0;
  *VAR_24 = (size_t)-1;
  return (VAR_0);
 }
 if (VAR_22)
  *VAR_22 = VAR_20 + VAR_28;
 FUNC_4(VAR_20, VAR_27, VAR_28);
 *VAR_24 = VAR_28;

 return (0);

ilseq:
 *VAR_24 = (size_t)-1;
 return (VAR_1);
}
