
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int afg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 unsigned int FUNC_1 (struct hda_codec*,int ,int ,int ,int ) ;
 int FUNC_2 (struct hda_codec*,int ,int ,int ,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct hda_codec *VAR_6, int VAR_7, int VAR_8)
{
 unsigned int VAR_9, VAR_10, VAR_11;

 VAR_9 = FUNC_1(VAR_6, VAR_6->afg, 0,
           VAR_0, 0);

 if (!VAR_8)
  VAR_9 |= (1 << VAR_7);
 else
  VAR_9 &= ~(1 << VAR_7);

 VAR_10 = FUNC_1(VAR_6, VAR_6->afg, 0,
          VAR_2, 0);
 VAR_10 |= (1 << VAR_7);

 VAR_11 = FUNC_1(VAR_6, VAR_6->afg, 0,
         VAR_1, 0);
 VAR_11 |= (1 << VAR_7);


 FUNC_2(VAR_6, VAR_6->afg, 0,
       VAR_5, VAR_10);
 FUNC_2(VAR_6, VAR_6->afg, 0,
       VAR_4, VAR_11);

 FUNC_0(1);

 FUNC_2(VAR_6, VAR_6->afg, 0,
       VAR_3, VAR_9);
}
