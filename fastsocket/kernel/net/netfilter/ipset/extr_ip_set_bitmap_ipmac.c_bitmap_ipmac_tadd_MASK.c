
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipmac_telem {int match; int timeout; int ether; } ;
struct ipmac {int ether; int id; } ;
struct ip_set {struct bitmap_ipmac* data; } ;
struct bitmap_ipmac {int timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (struct bitmap_ipmac*,int ) ;
 struct ipmac_telem* FUNC_1 (struct bitmap_ipmac*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct ip_set *VAR_3, void *VAR_4, u32 VAR_5, u32 VAR_6)
{
 struct bitmap_ipmac *VAR_7 = VAR_3->data;
 const struct ipmac *VAR_8 = VAR_4;
 struct ipmac_telem *VAR_9 = FUNC_1(VAR_7, VAR_8->id);
 bool VAR_10 = VAR_6 & VAR_2;

 switch (VAR_9->match) {
 case 128:
  if (!(VAR_8->ether || VAR_10))

   return -VAR_1;

  FUNC_3(VAR_9->ether, VAR_8->ether, VAR_0);
  VAR_9->match = 129;
  if (VAR_5 == VAR_7->timeout)

   VAR_5 = VAR_9->timeout;
  VAR_9->timeout = FUNC_2(VAR_5);
  break;
 case 129:
  if (!(FUNC_0(VAR_7, VAR_8->id) || VAR_10))
   return -VAR_1;

 case 130:
  if (VAR_8->ether) {
   FUNC_3(VAR_9->ether, VAR_8->ether, VAR_0);
   VAR_9->match = 129;
  } else
   VAR_9->match = 128;




  VAR_9->timeout = VAR_8->ether ? FUNC_2(VAR_5)
         : VAR_5;
  break;
 }

 return 0;
}
