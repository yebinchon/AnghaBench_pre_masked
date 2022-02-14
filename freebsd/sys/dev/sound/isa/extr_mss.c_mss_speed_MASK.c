
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mss_info {scalar_t__ bd_id; } ;
struct mss_chinfo {struct mss_info* parent; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct mss_info*) ;
 int FUNC_2 (struct mss_info*) ;
 int FUNC_3 (struct mss_info*,int) ;
 int FUNC_4 (struct mss_info*,int) ;
 int FUNC_5 (struct mss_info*,int,int) ;

__attribute__((used)) static int
FUNC_6(struct mss_chinfo *VAR_1, int VAR_2)
{
     struct mss_info *VAR_3 = VAR_1->parent;
     FUNC_1(VAR_3);
     if (VAR_3->bd_id == VAR_0) {
  FUNC_5(VAR_3, 22, (VAR_2 >> 8) & 0xff);
  FUNC_5(VAR_3, 23, VAR_2 & 0xff);

     } else {
         int VAR_4, VAR_5 = 0;
         static int VAR_6[] =
            {8000, 5512, 16000, 11025, 27429, 18900, 32000, 22050,
      -1, 37800, -1, 44100, 48000, 33075, 9600, 6615};

         for (VAR_4 = 1; VAR_4 < 16; VAR_4++)
          if (VAR_6[VAR_4] > 0 &&
       FUNC_0(VAR_2-VAR_6[VAR_4]) < FUNC_0(VAR_2-VAR_6[VAR_5])) VAR_5 = VAR_4;
         VAR_2 = VAR_6[VAR_5];
         FUNC_5(VAR_3, 8, (FUNC_3(VAR_3, 8) & 0xf0) | VAR_5);
  FUNC_4(VAR_3, 10000);
     }
     FUNC_2(VAR_3);

     return VAR_2;
}
