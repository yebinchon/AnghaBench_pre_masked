void FUNC_0(int VAR_0, int VAR_1, int VAR_2)
{
 char *VAR_3;

 do {
  VAR_3 = FUNC_0(VAR_0);
  if (VAR_3) {
   struct mbuf *VAR_4 = *(struct mbuf **)(VAR_3 - sizeof(void *));
   VAR_2--;
   FUNC_0(VAR_4);
  }
 } while (VAR_3);

 if (VAR_2 < 0)
  printf("Warning: Freeing of pool %u had too many mbufs (%d)\n", VAR_0, VAR_2);
 else if (VAR_2 > 0)
  FUNC_0("Warning: Freeing of pool %u is missing %d mbufs\n", VAR_0, VAR_2);
}
