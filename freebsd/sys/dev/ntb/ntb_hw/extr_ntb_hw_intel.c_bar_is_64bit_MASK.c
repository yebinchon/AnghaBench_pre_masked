
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_softc {int dummy; } ;
typedef enum ntb_bar { ____Placeholder_ntb_bar } ntb_bar ;


 int FUNC_0 (struct ntb_softc*,int ) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline bool
FUNC_2(struct ntb_softc *VAR_3, enum ntb_bar VAR_4)
{

 FUNC_1(VAR_4 < VAR_1, ("bogus bar"));
 return (VAR_4 < VAR_0 || !FUNC_0(VAR_3, VAR_2));
}
