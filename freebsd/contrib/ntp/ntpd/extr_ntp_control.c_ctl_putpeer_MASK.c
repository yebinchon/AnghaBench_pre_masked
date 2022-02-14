
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_4__ {int tstamp; struct autokey* ptr; } ;
struct peer {int flags; int keyid; char const* hostname; int r21; int r34; int throttle; int leap; int hmode; int stratum; int ppoll; int hpoll; int rootdelay; int rootdisp; int xleave; int bias; int reach; int flash; int ttl; int unreach; int nextdate; int delay; int offset; int jitter; int disp; int pmode; int received; int sent; int timereceived; int timereachable; int badauth; int bogusorg; int oldpkt; int seldisptoolarge; int selbroken; int status; int crypto; char const* subject; char const* ident; TYPE_2__ recval; int filter_nextpt; int filter_disp; int filter_offset; int filter_delay; int dst; int aorg; int reftime; int refid; int precision; TYPE_1__* dstadr; int srcadr; } ;
struct ctl_var {char const* text; int flags; } ;
struct autokey {int key; int seq; } ;
typedef int buf ;
struct TYPE_3__ {int sin; } ;
typedef int EVP_MD ;


 int FUNC_0 (int *) ;
 size_t VAR_0 ;

 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int const*) ;
 int * FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* FUNC_3 (int ) ;
 int VAR_8 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char const*,int ,int *) ;
 int FUNC_7 (char const*,int ,int ) ;
 int FUNC_8 (char*,int ,int ) ;
 int FUNC_9 (char const*,int) ;
 int FUNC_10 (char const*,int ) ;
 int FUNC_11 (char const*,int) ;
 int FUNC_12 (char const*,int ) ;
 int FUNC_13 (char const*,int ) ;
 int FUNC_14 (char const*,char const*,int) ;
 int FUNC_15 (char const*,int *) ;
 int FUNC_16 (char const*,int) ;
 int VAR_9 ;
 int FUNC_17 (char*,char const*,int) ;
 int FUNC_18 (int ) ;
 struct ctl_var* VAR_10 ;
 int FUNC_19 (char*,int,char*,char const*) ;
 int FUNC_20 (char const*) ;
 int * VAR_11 ;

__attribute__((used)) static void
FUNC_21(
 int VAR_12,
 struct peer *VAR_13
 )
{
 char VAR_14[VAR_2];
 char *VAR_15;
 char *VAR_16;
 char *VAR_17;
 int VAR_18;
 const struct ctl_var *VAR_19;






 switch (VAR_12) {

 case 177:
  FUNC_16(VAR_10[VAR_12].text,
       !(VAR_5 & VAR_13->flags));
  break;

 case 183:
  FUNC_16(VAR_10[VAR_12].text, !(VAR_13->keyid));
  break;

 case 182:
  FUNC_16(VAR_10[VAR_12].text,
       !!(VAR_4 & VAR_13->flags));
  break;

 case 139:
  FUNC_6(VAR_10[VAR_12].text, 0, &VAR_13->srcadr);
  break;

 case 137:
  FUNC_16(VAR_10[VAR_12].text, FUNC_5(&VAR_13->srcadr));
  break;

 case 138:
  if (VAR_13->hostname != ((void*)0))
   FUNC_14(VAR_10[VAR_12].text, VAR_13->hostname,
       FUNC_20(VAR_13->hostname));
  break;

 case 174:
  FUNC_6(VAR_10[VAR_12].text, 0,
      (VAR_13->dstadr != ((void*)0))
    ? &VAR_13->dstadr->sin
    : ((void*)0));
  break;

 case 173:
  FUNC_16(VAR_10[VAR_12].text,
       (VAR_13->dstadr != ((void*)0))
    ? FUNC_5(&VAR_13->dstadr->sin)
    : 0);
  break;

 case 163:
  if (VAR_13->r21 > 0.)
   FUNC_9(VAR_10[VAR_12].text, VAR_13->r21 / 1e3);
  break;

 case 155:
  if (VAR_13->r34 > 0.)
   FUNC_9(VAR_10[VAR_12].text, VAR_13->r34 / 1e3);
  break;

 case 151:
  FUNC_16(VAR_10[VAR_12].text, VAR_13->throttle);
  break;

 case 159:
  FUNC_16(VAR_10[VAR_12].text, VAR_13->leap);
  break;

 case 167:
  FUNC_16(VAR_10[VAR_12].text, VAR_13->hmode);
  break;

 case 136:
  FUNC_16(VAR_10[VAR_12].text, VAR_13->stratum);
  break;

 case 153:
  FUNC_16(VAR_10[VAR_12].text, VAR_13->ppoll);
  break;

 case 165:
  FUNC_16(VAR_10[VAR_12].text, VAR_13->hpoll);
  break;

 case 152:
  FUNC_12(VAR_10[VAR_12].text, VAR_13->precision);
  break;

 case 145:
  FUNC_9(VAR_10[VAR_12].text, VAR_13->rootdelay * 1e3);
  break;

 case 144:
  FUNC_9(VAR_10[VAR_12].text, VAR_13->rootdisp * 1e3);
  break;

 case 147:






  if (FUNC_4(VAR_13->stratum))
   FUNC_13(VAR_10[VAR_12].text, VAR_13->refid);
  else
   FUNC_6(VAR_10[VAR_12].text, VAR_13->refid, ((void*)0));
  break;

 case 146:
  FUNC_15(VAR_10[VAR_12].text, &VAR_13->reftime);
  break;

 case 156:
  FUNC_15(VAR_10[VAR_12].text, &VAR_13->aorg);
  break;

 case 149:
  FUNC_15(VAR_10[VAR_12].text, &VAR_13->dst);
  break;

 case 128:
  if (VAR_13->xleave)
   FUNC_9(VAR_10[VAR_12].text, VAR_13->xleave * 1e3);
  break;

 case 180:
  if (VAR_13->bias != 0.)
   FUNC_9(VAR_10[VAR_12].text, VAR_13->bias * 1e3);
  break;

 case 150:
  FUNC_11(VAR_10[VAR_12].text, VAR_13->reach);
  break;

 case 168:
  FUNC_11(VAR_10[VAR_12].text, VAR_13->flash);
  break;

 case 132:






  if (VAR_13->ttl > 0 && VAR_13->ttl < FUNC_0(VAR_11))
   FUNC_12(VAR_10[VAR_12].text,
       VAR_11[VAR_13->ttl]);
  break;

 case 131:
  FUNC_16(VAR_10[VAR_12].text, VAR_13->unreach);
  break;

 case 135:
  FUNC_16(VAR_10[VAR_12].text,
       VAR_13->nextdate - VAR_9);
  break;

 case 176:
  FUNC_9(VAR_10[VAR_12].text, VAR_13->delay * 1e3);
  break;

 case 158:
  FUNC_9(VAR_10[VAR_12].text, VAR_13->offset * 1e3);
  break;

 case 161:
  FUNC_9(VAR_10[VAR_12].text, VAR_13->jitter * 1e3);
  break;

 case 175:
  FUNC_9(VAR_10[VAR_12].text, VAR_13->disp * 1e3);
  break;

 case 160:
  if (VAR_13->keyid > VAR_7)
   FUNC_11(VAR_10[VAR_12].text, VAR_13->keyid);
  else
   FUNC_16(VAR_10[VAR_12].text, VAR_13->keyid);
  break;

 case 172:
  FUNC_7(VAR_10[VAR_12].text, VAR_13->filter_delay,
        VAR_13->filter_nextpt);
  break;

 case 170:
  FUNC_7(VAR_10[VAR_12].text, VAR_13->filter_offset,
        VAR_13->filter_nextpt);
  break;

 case 171:
  FUNC_7(VAR_10[VAR_12].text, VAR_13->filter_disp,
        VAR_13->filter_nextpt);
  break;

 case 154:
  FUNC_16(VAR_10[VAR_12].text, VAR_13->pmode);
  break;

 case 148:
  FUNC_16(VAR_10[VAR_12].text, VAR_13->received);
  break;

 case 141:
  FUNC_16(VAR_10[VAR_12].text, VAR_13->sent);
  break;

 case 129:
  VAR_15 = VAR_14;
  VAR_17 = VAR_14 + sizeof(VAR_14);
  if (FUNC_20(VAR_10[VAR_12].text) + 4 > sizeof(VAR_14))
   break;

  FUNC_19(VAR_15, sizeof(VAR_14), "%s=\"", VAR_10[VAR_12].text);
  VAR_15 += FUNC_20(VAR_15);
  VAR_16 = VAR_15;
  for (VAR_19 = VAR_10; !(VAR_3 & VAR_19->flags); VAR_19++) {
   if (VAR_8 & VAR_19->flags)
    continue;
   VAR_18 = FUNC_20(VAR_19->text);
   if (VAR_15 + VAR_18 + 1 >= VAR_17)
    break;
   if (VAR_15 != VAR_16)
    *VAR_15++ = ',';
   FUNC_17(VAR_15, VAR_19->text, VAR_18);
   VAR_15 += VAR_18;
  }
  if (VAR_15 + 2 < VAR_17) {
   *VAR_15++ = '"';
   *VAR_15 = '\0';
   FUNC_8(VAR_14, (u_int)(VAR_15 - VAR_14), 0);
  }
  break;

 case 133:
  FUNC_16(VAR_10[VAR_12].text,
       VAR_9 - VAR_13->timereceived);
  break;

 case 134:
  FUNC_16(VAR_10[VAR_12].text,
       VAR_9 - VAR_13->timereachable);
  break;

 case 181:
  FUNC_16(VAR_10[VAR_12].text, VAR_13->badauth);
  break;

 case 179:
  FUNC_16(VAR_10[VAR_12].text, VAR_13->bogusorg);
  break;

 case 157:
  FUNC_16(VAR_10[VAR_12].text, VAR_13->oldpkt);
  break;

 case 142:
  FUNC_16(VAR_10[VAR_12].text, VAR_13->seldisptoolarge);
  break;

 case 143:
  FUNC_16(VAR_10[VAR_12].text, VAR_13->selbroken);
  break;

 case 178:
  FUNC_16(VAR_10[VAR_12].text, VAR_13->status);
  break;
 }
}
