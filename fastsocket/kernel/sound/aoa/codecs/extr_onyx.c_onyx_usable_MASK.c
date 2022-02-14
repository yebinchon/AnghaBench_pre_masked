
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct transfer_info {int tag; } ;
struct onyx {int mutex; } ;
struct codec_info_item {struct onyx* codec_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct onyx*,int ,int*) ;

__attribute__((used)) static int FUNC_3(struct codec_info_item *VAR_5,
         struct transfer_info *VAR_6,
         struct transfer_info *VAR_7)
{
 u8 VAR_8;
 struct onyx *VAR_9 = VAR_5->codec_data;
 int VAR_10, VAR_11;

 FUNC_0(&VAR_9->mutex);
 FUNC_2(VAR_9, VAR_3, &VAR_8);
 VAR_10 = !!(VAR_8 & VAR_4);
 FUNC_2(VAR_9, VAR_2, &VAR_8);
 VAR_11 =
  (VAR_8 & (VAR_1|VAR_0))
   != (VAR_1|VAR_0);
 FUNC_1(&VAR_9->mutex);

 switch (VAR_6->tag) {
 case 0: return 1;
 case 1: return VAR_11;
 case 2: return VAR_10;
 }
 return 1;
}
