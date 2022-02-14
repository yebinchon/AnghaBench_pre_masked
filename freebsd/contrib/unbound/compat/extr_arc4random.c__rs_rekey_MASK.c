
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_4__ {int rs_have; } ;
struct TYPE_3__ {int * rs_buf; int rs_chacha; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 size_t FUNC_1 (size_t,int) ;
 int FUNC_2 (int *,int *,int *,int) ;
 int FUNC_3 (int *,int ,int) ;
 TYPE_2__* VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static inline void
FUNC_4(u_char *VAR_4, size_t VAR_5)
{

 FUNC_3(VAR_3->rs_buf, 0, sizeof(VAR_3->rs_buf));


 FUNC_2(&VAR_3->rs_chacha, VAR_3->rs_buf,
     VAR_3->rs_buf, sizeof(VAR_3->rs_buf));

 if (VAR_4) {
  size_t VAR_6, VAR_7;

  VAR_7 = FUNC_1(VAR_5, VAR_1 + VAR_0);
  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
   VAR_3->rs_buf[VAR_6] ^= VAR_4[VAR_6];
 }

 FUNC_0(VAR_3->rs_buf, VAR_1 + VAR_0);
 FUNC_3(VAR_3->rs_buf, 0, VAR_1 + VAR_0);
 VAR_2->rs_have = sizeof(VAR_3->rs_buf) - VAR_1 - VAR_0;
}
