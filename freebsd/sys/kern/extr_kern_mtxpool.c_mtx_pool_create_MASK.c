
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtx_pool {int dummy; } ;
struct mtx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mtx_pool* FUNC_0 (int,int ,int) ;
 int FUNC_1 (struct mtx_pool*,char const*,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,char const*) ;

struct mtx_pool *
FUNC_4(const char *VAR_3, int VAR_4, int VAR_5)
{
 struct mtx_pool *VAR_6;

 if (VAR_4 <= 0 || !FUNC_2(VAR_4)) {
  FUNC_3("WARNING: %s pool size is not a power of 2.\n",
      VAR_3);
  VAR_4 = 128;
 }
 VAR_6 = FUNC_0(sizeof (struct mtx_pool) +
     ((VAR_4 - 1) * sizeof (struct mtx)),
     VAR_0, VAR_1 | VAR_2);
 FUNC_1(VAR_6, VAR_3, VAR_4, VAR_5);
 return VAR_6;
}
