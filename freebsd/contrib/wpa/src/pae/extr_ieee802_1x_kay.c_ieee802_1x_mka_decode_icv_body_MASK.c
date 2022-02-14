
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ieee802_1x_mka_participant {TYPE_1__* kay; } ;
struct ieee802_1x_mka_icv_body {scalar_t__ const* icv; } ;
struct ieee802_1x_mka_hdr {int dummy; } ;
struct TYPE_4__ {size_t icv_len; } ;
struct TYPE_3__ {size_t mka_algindex; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (int ) ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct ieee802_1x_mka_hdr const*) ;
 scalar_t__ FUNC_2 (struct ieee802_1x_mka_hdr const*) ;
 TYPE_2__* VAR_3 ;

__attribute__((used)) static const u8 *
FUNC_3(struct ieee802_1x_mka_participant *VAR_4,
          const u8 *VAR_5, size_t VAR_6)
{
 const struct ieee802_1x_mka_hdr *VAR_7;
 const struct ieee802_1x_mka_icv_body *VAR_8;
 size_t VAR_9;
 size_t VAR_10;
 u8 VAR_11;
 const u8 *VAR_12;

 VAR_12 = VAR_5;
 VAR_10 = VAR_6;
 while (VAR_10 > VAR_1 + VAR_0) {
  VAR_7 = (const struct ieee802_1x_mka_hdr *) VAR_12;
  VAR_9 = FUNC_0(FUNC_1(VAR_7));
  VAR_11 = FUNC_2(VAR_7);

  if (VAR_10 < VAR_9 + VAR_1)
   break;

  if (VAR_11 != VAR_2) {
   VAR_10 -= VAR_1 + VAR_9;
   VAR_12 += VAR_1 + VAR_9;
   continue;
  }

  VAR_8 = (const struct ieee802_1x_mka_icv_body *) VAR_12;
  if (VAR_9
      < VAR_3[VAR_4->kay->mka_algindex].icv_len)
   return ((void*)0);

  return VAR_8->icv;
 }

 return VAR_5 + VAR_6 - VAR_0;
}
