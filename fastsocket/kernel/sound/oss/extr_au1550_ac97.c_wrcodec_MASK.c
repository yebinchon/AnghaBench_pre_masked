
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct au1550_state {int lock; } ;
struct ac97_codec {scalar_t__ private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_7(struct ac97_codec *VAR_6, u8 VAR_7, u16 VAR_8)
{
 struct au1550_state *VAR_9 = (struct au1550_state *)VAR_6->private_data;
 unsigned long VAR_10;
 u32 VAR_11, VAR_12;
 int VAR_13;

 FUNC_5(&VAR_9->lock, VAR_10);

 for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
  VAR_12 = FUNC_1(VAR_4);
  FUNC_2();
  if (!(VAR_12 & VAR_5))
   break;
 }
 if (VAR_13 == VAR_0)
  FUNC_4("wrcodec: codec cmd pending expired!");

 VAR_11 = (u32)FUNC_0(VAR_7);
 VAR_11 |= (u32)VAR_8;
 FUNC_3(VAR_11, VAR_1);
 FUNC_2();

 for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
  VAR_12 = FUNC_1(VAR_4);
  FUNC_2();
  if (!(VAR_12 & VAR_5))
   break;
 }
 if (VAR_13 == VAR_0)
  FUNC_4("wrcodec: codec cmd pending expired!");

 for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
  VAR_12 = FUNC_1(VAR_2);
  FUNC_2();
  if (VAR_12 & VAR_3)
   break;
 }
 if (VAR_13 == VAR_0)
  FUNC_4("wrcodec: read cmdwait expired!");



 FUNC_3(VAR_3, VAR_2);
 FUNC_2();

 FUNC_6(&VAR_9->lock, VAR_10);
}
