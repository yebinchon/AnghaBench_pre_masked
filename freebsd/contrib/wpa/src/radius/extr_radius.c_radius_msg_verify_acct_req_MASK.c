
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zero ;
typedef int u8 ;
struct radius_msg {TYPE_1__* hdr; int buf; } ;
struct radius_hdr {int dummy; } ;
struct TYPE_2__ {int authenticator; } ;


 int VAR_0 ;
 int FUNC_0 (int,int const**,size_t*,int *) ;
 scalar_t__ FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct radius_msg *VAR_1, const u8 *VAR_2,
          size_t VAR_3)
{
 const u8 *VAR_4[4];
 size_t VAR_5[4];
 u8 VAR_6[VAR_0];
 u8 VAR_7[VAR_0];

 FUNC_2(VAR_6, 0, sizeof(VAR_6));
 VAR_4[0] = (u8 *) VAR_1->hdr;
 VAR_5[0] = sizeof(struct radius_hdr) - VAR_0;
 VAR_4[1] = VAR_6;
 VAR_5[1] = VAR_0;
 VAR_4[2] = (u8 *) (VAR_1->hdr + 1);
 VAR_5[2] = FUNC_3(VAR_1->buf) - sizeof(struct radius_hdr);
 VAR_4[3] = VAR_2;
 VAR_5[3] = VAR_3;
 FUNC_0(4, VAR_4, VAR_5, VAR_7);
 return FUNC_1(VAR_1->hdr->authenticator, VAR_7, VAR_0) != 0;
}
