
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct agg_rchinfo {int speed; int stereo; int blklen; int buflen; int buffer; TYPE_1__* parent; } ;
typedef int kobj_t ;
struct TYPE_2__ {int bufsz; } ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static u_int32_t
FUNC_7(kobj_t VAR_0, void *VAR_1, u_int32_t VAR_2)
{
 struct agg_rchinfo *VAR_3 = VAR_1;
 int VAR_4;


 VAR_4 = (VAR_3->speed << VAR_3->stereo) / (25 * VAR_2);
 FUNC_0(VAR_4, 2, VAR_3->parent->bufsz / VAR_2);

 if (FUNC_3(VAR_3->buffer) != VAR_4 * VAR_2) {
  FUNC_4(VAR_3->buffer, VAR_4, VAR_2);
  VAR_4 = FUNC_1(VAR_3->buffer);
  VAR_2 = FUNC_2(VAR_3->buffer);
 } else {
  FUNC_5(VAR_3->buffer, VAR_4);
  FUNC_6(VAR_3->buffer, VAR_2);
 }

 VAR_3->blklen = VAR_2 / 2;
 VAR_3->buflen = VAR_4 * VAR_2 / 2;
 return VAR_2;
}
