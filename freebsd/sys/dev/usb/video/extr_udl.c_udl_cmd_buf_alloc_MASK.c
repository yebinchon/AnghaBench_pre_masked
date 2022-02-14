
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udl_softc {int dummy; } ;
struct udl_cmd_buf {int dummy; } ;


 int FUNC_0 (struct udl_softc*) ;
 int FUNC_1 (struct udl_softc*) ;
 struct udl_cmd_buf* FUNC_2 (struct udl_softc*,int) ;

__attribute__((used)) static struct udl_cmd_buf *
FUNC_3(struct udl_softc *VAR_0, int VAR_1)
{
 struct udl_cmd_buf *VAR_2;

 FUNC_0(VAR_0);
 VAR_2 = FUNC_2(VAR_0, VAR_1);
 FUNC_1(VAR_0);
 return (VAR_2);
}
