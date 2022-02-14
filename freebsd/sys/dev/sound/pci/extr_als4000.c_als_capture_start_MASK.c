
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_info {int dummy; } ;
struct sc_chinfo {int format; int dma_active; int buffer; struct sc_info* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct sc_info*,int ) ;
 int FUNC_1 (struct sc_info*,int ,int) ;
 int FUNC_2 (struct sc_info*,int) ;
 int FUNC_3 (struct sc_info*,int ,int) ;
 int FUNC_4 (struct sc_chinfo*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(struct sc_chinfo *VAR_8)
{
 struct sc_info *VAR_9 = VAR_8->parent;
 u_int32_t VAR_10, VAR_11, VAR_12, VAR_13;

 VAR_10 = FUNC_5(VAR_8->buffer);
 VAR_11 = FUNC_6(VAR_8->buffer);
 VAR_12 = VAR_11 / 2;
 if (VAR_8->format & VAR_0)
  VAR_12 /= 2;
 VAR_12--;

 FUNC_0(VAR_9, VAR_7);
 FUNC_4(VAR_8);

 FUNC_1(VAR_9, VAR_6, VAR_10);
 FUNC_1(VAR_9, VAR_5, (VAR_11 - 1));

 FUNC_3(VAR_9, VAR_3, VAR_12 & 0xff);
 FUNC_3(VAR_9, VAR_2, VAR_12 >> 8);

 VAR_13 = VAR_4 | FUNC_2(VAR_9, VAR_8->format);
 FUNC_3(VAR_9, VAR_1, VAR_13);

 VAR_8->dma_active = 1;
}
