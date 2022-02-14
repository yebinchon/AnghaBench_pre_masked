
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct au1550_state {int lock; } ;
struct ac97_codec {scalar_t__ private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static u16
FUNC_7(struct ac97_codec *VAR_7, u8 VAR_8)
{
 struct au1550_state *VAR_9 = (struct au1550_state *)VAR_7->private_data;
 unsigned long VAR_10;
 u32 VAR_11, VAR_12;
 u16 VAR_13;
 int VAR_14;

 FUNC_5(&VAR_9->lock, VAR_10);

 for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++) {
  VAR_12 = FUNC_1(VAR_5);
  FUNC_2();
  if (!(VAR_12 & VAR_6))
   break;
 }
 if (VAR_14 == VAR_0)
  FUNC_4("rdcodec: codec cmd pending expired!");

 VAR_11 = (u32)FUNC_0(VAR_8);
 VAR_11 |= VAR_2;
 FUNC_3(VAR_11, VAR_1);
 FUNC_2();



 for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++) {
  VAR_12 = FUNC_1(VAR_5);
  FUNC_2();
  if (!(VAR_12 & VAR_6))
   break;
 }
 if (VAR_14 == VAR_0) {
  FUNC_4("rdcodec: read poll expired!");
  VAR_13 = 0;
  goto out;
 }



 for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++) {
  VAR_12 = FUNC_1(VAR_3);
  FUNC_2();
  if (VAR_12 & VAR_4)
   break;
 }
 if (VAR_14 == VAR_0) {
  FUNC_4("rdcodec: read cmdwait expired!");
  VAR_13 = 0;
  goto out;
 }

 VAR_13 = FUNC_1(VAR_1) & 0xffff;
 FUNC_2();



 FUNC_3(VAR_4, VAR_3);
 FUNC_2();

 out:
 FUNC_6(&VAR_9->lock, VAR_10);

 return VAR_13;
}
