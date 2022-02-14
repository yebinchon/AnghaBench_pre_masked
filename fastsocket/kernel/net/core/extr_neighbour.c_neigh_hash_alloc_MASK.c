
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct neighbour {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (unsigned long) ;
 struct neighbour** FUNC_2 (unsigned long,int) ;

__attribute__((used)) static struct neighbour **FUNC_3(unsigned int VAR_3)
{
 unsigned long VAR_4 = VAR_3 * sizeof(struct neighbour *);
 struct neighbour **VAR_5;

 if (VAR_4 <= VAR_1) {
  VAR_5 = FUNC_2(VAR_4, VAR_0);
 } else {
  VAR_5 = (struct neighbour **)
        FUNC_0(VAR_0|VAR_2, FUNC_1(VAR_4));
 }
 return VAR_5;
}
