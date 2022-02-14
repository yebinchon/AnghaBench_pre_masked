
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct udl_softc {int dummy; } ;
struct udl_cmd_buf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct udl_cmd_buf* FUNC_0 (struct udl_softc*,int) ;
 int FUNC_1 (struct udl_softc*,struct udl_cmd_buf*) ;
 int FUNC_2 (struct udl_cmd_buf*,int) ;
 int FUNC_3 (struct udl_cmd_buf*,int ) ;

__attribute__((used)) static int
FUNC_4(struct udl_softc *VAR_4, uint32_t VAR_5, uint32_t VAR_6,
    uint8_t VAR_7, int VAR_8)
{
 struct udl_cmd_buf *VAR_9;

 VAR_9 = FUNC_0(VAR_4, VAR_8);
 if (VAR_9 == ((void*)0))
  return (VAR_0);

 FUNC_2(VAR_9, VAR_3);
 FUNC_2(VAR_9, VAR_1 | VAR_2);
 FUNC_3(VAR_9, VAR_6);
 FUNC_2(VAR_9, VAR_7);
 FUNC_3(VAR_9, VAR_5);
 FUNC_1(VAR_4, VAR_9);

 return (0);
}
