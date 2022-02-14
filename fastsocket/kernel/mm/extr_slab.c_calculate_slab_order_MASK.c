
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slab {int dummy; } ;
struct kmem_cache {unsigned int num; int gfporder; } ;
typedef int kmem_bufctl_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (int,size_t,size_t,unsigned long,size_t*,unsigned int*) ;
 int VAR_4 ;

__attribute__((used)) static size_t FUNC_1(struct kmem_cache *VAR_5,
   size_t VAR_6, size_t VAR_7, unsigned long VAR_8)
{
 unsigned long VAR_9;
 size_t VAR_10 = 0;
 int VAR_11;

 for (VAR_11 = 0; VAR_11 <= VAR_1; VAR_11++) {
  unsigned int VAR_12;
  size_t VAR_13;

  FUNC_0(VAR_11, VAR_6, VAR_7, VAR_8, &VAR_13, &VAR_12);
  if (!VAR_12)
   continue;

  if (VAR_8 & VAR_0) {





   VAR_9 = VAR_6 - sizeof(struct slab);
   VAR_9 /= sizeof(kmem_bufctl_t);

    if (VAR_12 > VAR_9)
    break;
  }


  VAR_5->num = VAR_12;
  VAR_5->gfporder = VAR_11;
  VAR_10 = VAR_13;






  if (VAR_8 & VAR_3)
   break;





  if (VAR_11 >= VAR_4)
   break;




  if (VAR_10 * 8 <= (VAR_2 << VAR_11))
   break;
 }
 return VAR_10;
}
