
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct torus {int x_sz; int flags; scalar_t__*** sw; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (struct torus*,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static
bool FUNC_2(struct torus *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 bool VAR_8 = 1;
 if (VAR_1->x_sz != 4 || VAR_1->flags & VAR_0)
  goto out;

 VAR_5 = FUNC_0(VAR_2 - 1, VAR_1->x_sz);
 VAR_6 = FUNC_0(VAR_2 + 1, VAR_1->x_sz);
 VAR_7 = FUNC_0(VAR_2 + 2, VAR_1->x_sz);

 if (!!VAR_1->sw[VAR_5][VAR_3][VAR_4] +
     !!VAR_1->sw[VAR_6][VAR_3][VAR_4] + !!VAR_1->sw[VAR_7][VAR_3][VAR_4] < 2) {
  VAR_8 = 0;
  goto out;
 }
 if (VAR_1->sw[VAR_7][VAR_3][VAR_4] && VAR_1->sw[VAR_5][VAR_3][VAR_4])
  VAR_8 = FUNC_1(VAR_1, 0,
      VAR_1->sw[VAR_7][VAR_3][VAR_4],
      VAR_1->sw[VAR_5][VAR_3][VAR_4])
   && VAR_8;

 if (VAR_1->sw[VAR_5][VAR_3][VAR_4] && VAR_1->sw[VAR_2][VAR_3][VAR_4])
  VAR_8 = FUNC_1(VAR_1, 0,
      VAR_1->sw[VAR_5][VAR_3][VAR_4],
      VAR_1->sw[VAR_2][VAR_3][VAR_4])
   && VAR_8;

 if (VAR_1->sw[VAR_2][VAR_3][VAR_4] && VAR_1->sw[VAR_6][VAR_3][VAR_4])
  VAR_8 = FUNC_1(VAR_1, 0,
      VAR_1->sw[VAR_2][VAR_3][VAR_4],
      VAR_1->sw[VAR_6][VAR_3][VAR_4])
   && VAR_8;

 if (VAR_1->sw[VAR_6][VAR_3][VAR_4] && VAR_1->sw[VAR_7][VAR_3][VAR_4])
  VAR_8 = FUNC_1(VAR_1, 0,
      VAR_1->sw[VAR_6][VAR_3][VAR_4],
      VAR_1->sw[VAR_7][VAR_3][VAR_4])
   && VAR_8;
out:
 return VAR_8;
}
