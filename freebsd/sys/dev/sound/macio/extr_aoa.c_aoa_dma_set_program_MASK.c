
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct aoa_dma {int bufsz; int slots; int blksz; int channel; int buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ,int,int ,int ,scalar_t__,int,int ,int ,int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(struct aoa_dma *VAR_5)
{
 u_int32_t VAR_6;
 int VAR_7;

 VAR_6 = (u_int32_t) FUNC_7(VAR_5->buf);
 FUNC_0(VAR_5->bufsz == FUNC_8(VAR_5->buf), ("bad size"));

 VAR_5->slots = VAR_5->bufsz / VAR_5->blksz;

 for (VAR_7 = 0; VAR_7 < VAR_5->slots; ++VAR_7) {
  FUNC_2(VAR_5->channel,
      VAR_7,
      VAR_4,
      0,
      VAR_6,
      VAR_5->blksz,
      VAR_1,
      VAR_2,
      VAR_3,
      VAR_5->slots + 1
  );

  VAR_6 += VAR_5->blksz;
 }


 FUNC_1(VAR_5->channel, VAR_5->slots, 0);


 FUNC_3(VAR_5->channel, VAR_5->slots + 1);


 FUNC_4(VAR_5->channel, 1 << 0, 1 << 0);
 FUNC_5(VAR_5->channel, 1 << 0, 0);

 FUNC_6(VAR_5->channel, VAR_0);
}
