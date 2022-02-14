
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct voice {int substream; int timing; } ;
struct sis7019 {unsigned long ioport; struct voice capture_voice; int * voices; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_8, void *VAR_9)
{
 struct sis7019 *VAR_10 = VAR_9;
 unsigned long VAR_11 = VAR_10->ioport;
 struct voice *VAR_12;
 u32 VAR_13, VAR_14;







 VAR_13 = FUNC_0(VAR_11 + VAR_2);
 VAR_13 &= VAR_3 |
  VAR_4;
 if (!VAR_13)
  return VAR_1;

 do {
  VAR_14 = FUNC_0(VAR_11 + VAR_5);
  if (VAR_14) {
   FUNC_2(VAR_14, VAR_10->voices);
   FUNC_1(VAR_14, VAR_11 + VAR_5);
  }

  VAR_14 = FUNC_0(VAR_11 + VAR_6);
  if (VAR_14) {
   FUNC_2(VAR_14, &VAR_10->voices[32]);
   FUNC_1(VAR_14, VAR_11 + VAR_6);
  }

  VAR_14 = FUNC_0(VAR_11 + VAR_7);
  if (VAR_14) {
   VAR_12 = &VAR_10->capture_voice;
   if (!VAR_12->timing)
    FUNC_3(VAR_12->substream);

   FUNC_1(VAR_14, VAR_11 + VAR_7);
  }

  FUNC_1(VAR_13, VAR_11 + VAR_2);
  VAR_13 = FUNC_0(VAR_11 + VAR_2);
  VAR_13 &= VAR_3 |
   VAR_4;
 } while (VAR_13);

 return VAR_0;
}
