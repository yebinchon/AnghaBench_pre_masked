
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtx {int dummy; } ;
struct bio {int bio_flags; scalar_t__ bio_error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bio*,struct mtx*,int ,char const*,int ) ;
 int FUNC_1 (struct mtx*) ;
 struct mtx* FUNC_2 (int ,struct bio*) ;
 int FUNC_3 (struct mtx*) ;
 int VAR_4 ;

int
FUNC_4(struct bio *VAR_5, const char *VAR_6)
{
 struct mtx *VAR_7;

 VAR_7 = FUNC_2(VAR_4, VAR_5);
 FUNC_1(VAR_7);
 while ((VAR_5->bio_flags & VAR_0) == 0)
  FUNC_0(VAR_5, VAR_7, VAR_3, VAR_6, 0);
 FUNC_3(VAR_7);
 if (VAR_5->bio_error != 0)
  return (VAR_5->bio_error);
 if (!(VAR_5->bio_flags & VAR_1))
  return (0);
 return (VAR_2);
}
