
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm9713_priv {unsigned int pll_in; } ;
struct snd_soc_codec {struct wm9713_priv* private_data; } ;
struct _pll_div {int k; int n; int lf; int divsel; int divctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_soc_codec*,int ) ;
 int FUNC_1 (struct snd_soc_codec*,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct _pll_div*,unsigned int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_codec *VAR_3,
 int VAR_4, unsigned int VAR_5, unsigned int VAR_6)
{
 struct wm9713_priv *VAR_7 = VAR_3->private_data;
 u16 VAR_8, VAR_9;
 struct _pll_div VAR_10;


 if (VAR_5 == 0) {

  VAR_8 = FUNC_0(VAR_3, VAR_1);
  FUNC_1(VAR_3, VAR_1, VAR_8 | 0x0080);
  VAR_8 = FUNC_0(VAR_3, VAR_0);
  FUNC_1(VAR_3, VAR_0, VAR_8 | 0x0200);
  VAR_7->pll_in = 0;
  return 0;
 }

 FUNC_3(&VAR_10, VAR_5);

 if (VAR_10.k == 0) {
  VAR_8 = (VAR_10.n << 12) | (VAR_10.lf << 11) |
   (VAR_10.divsel << 9) | (VAR_10.divctl << 8);
  FUNC_1(VAR_3, VAR_2, VAR_8);
 } else {

  VAR_9 = (VAR_10.n << 12) | (VAR_10.lf << 11) | (1 << 10) |
   (VAR_10.divsel << 9) | (VAR_10.divctl << 8);


  VAR_8 = VAR_9 | (0x5 << 4) | (VAR_10.k >> 20);
  FUNC_1(VAR_3, VAR_2, VAR_8);


  VAR_8 = VAR_9 | (0x4 << 4) | ((VAR_10.k >> 16) & 0xf);
  FUNC_1(VAR_3, VAR_2, VAR_8);


  VAR_8 = VAR_9 | (0x3 << 4) | ((VAR_10.k >> 12) & 0xf);
  FUNC_1(VAR_3, VAR_2, VAR_8);


  VAR_8 = VAR_9 | (0x2 << 4) | ((VAR_10.k >> 8) & 0xf);
  FUNC_1(VAR_3, VAR_2, VAR_8);


  VAR_8 = VAR_9 | (0x1 << 4) | ((VAR_10.k >> 4) & 0xf);
  FUNC_1(VAR_3, VAR_2, VAR_8);

  VAR_8 = VAR_9 | (0x0 << 4) | (VAR_10.k & 0xf);
  FUNC_1(VAR_3, VAR_2, VAR_8);
 }


 VAR_8 = FUNC_0(VAR_3, VAR_0);
 FUNC_1(VAR_3, VAR_0, VAR_8 & 0xfdff);
 VAR_8 = FUNC_0(VAR_3, VAR_1);
 FUNC_1(VAR_3, VAR_1, VAR_8 & 0xff7f);
 VAR_7->pll_in = VAR_5;


 FUNC_4(FUNC_2(10));
 return 0;
}
