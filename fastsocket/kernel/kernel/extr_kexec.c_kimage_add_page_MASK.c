
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kimage {int destination; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct kimage*,unsigned long) ;

__attribute__((used)) static int FUNC_1(struct kimage *VAR_3, unsigned long VAR_4)
{
 int VAR_5;

 VAR_4 &= VAR_1;
 VAR_5 = FUNC_0(VAR_3, VAR_4 | VAR_0);
 if (VAR_5 == 0)
  VAR_3->destination += VAR_2;

 return VAR_5;
}
