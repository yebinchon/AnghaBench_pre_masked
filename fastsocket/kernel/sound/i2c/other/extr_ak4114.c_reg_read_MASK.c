
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ak4114 {unsigned char (* read ) (int ,unsigned char) ;int private_data; } ;


 unsigned char FUNC_0 (int ,unsigned char) ;

__attribute__((used)) static inline unsigned char FUNC_1(struct ak4114 *VAR_0, unsigned char VAR_1)
{
 return VAR_0->read(VAR_0->private_data, VAR_1);
}
